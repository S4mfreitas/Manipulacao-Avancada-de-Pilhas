#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED
#define MAX 50

struct pilha
{
    int v;
    float VET[MAX];
};
typedef struct pilha Pilha;
Pilha *pilha_cria(void);
void pilha_push(Pilha *p, float n);
float pilha_pop(Pilha *p);
int pilha_vazia(Pilha *p);
void pilha_libera(Pilha *p);
float topo (Pilha *p);
void concatena_pilhas(Pilha *p1, Pilha *p2);
Pilha *copia_pilha(Pilha *p);
void pilha_imprime(Pilha *p);

#endif // PILHA_H_INCLUDED
