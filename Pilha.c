#include <stdio.h>
#include "Pilha.h"

Pilha *pilha_cria(void)
{
    Pilha *p;
    p= (Pilha*)malloc(sizeof(Pilha));
    p->v=0;
    return p;
}
void pilha_push(Pilha *p, float n)
{
    if(p->v==MAX)
    {
     printf("Pilha cheia!\n");
     exit(1);
    }
    p->VET[p->v]=n;
    p->v++;
}
float pilha_pop(Pilha *p)
{
    if(pilha_vazia(p))
    {
        printf("Pilha Vazia!\n");
        exit(1);
    }
    float v;
    v=p->VET[p->v-1];
    p->v--;
    return v;
}
int pilha_vazia(Pilha *p)
{
    return p->v==0;
}
void pilha_libera(Pilha *p)
{
    free(p);
}
float topo (Pilha *p)
{
    float aux;
    if(pilha_vazia(p))
    {
        printf("Pilha Vazia!\n");
        exit(1);
    }
    aux=pilha_pop(p);
    pilha_push(p, aux);
    return aux;
}
void concatena_pilhas(Pilha *p1, Pilha *p2)
{
    Pilha *tmp;
    tmp=pilha_cria();
    while(!pilha_vazia(p2))
    {
        pilha_push(tmp,pilha_pop(p2));
    }
    while(!pilha_vazia(tmp))
    {
        pilha_push(p1,pilha_pop(tmp));
    }
    pilha_libera(tmp);
}

Pilha *copia_pilha(Pilha *p)
{
    Pilha *xerox;
    xerox= pilha_cria();
    Pilha *aux;
    aux= pilha_cria();
    while(!pilha_vazia(p))
    {
        pilha_push(aux, pilha_pop(p));
    }
    while(!pilha_vazia(aux))
    {
        pilha_push(xerox, pilha_pop(aux));
    }
    pilha_libera(aux);
    return xerox;
}
void pilha_imprime(Pilha *p)
{
    if (pilha_vazia(p))
    {
        printf("Pilha vazia!\n");
        exit(1);
    }
    for (int i = p->v - 1; i >= 0; i--)
    {
        printf("%.2f\n", p->VET[i]);
    }
    printf("\n");
}
