#include <stdio.h>
#include "Pilha.h"

int main()
{
    Pilha *p1, *p2, *p3;
    float v;
    p1=pilha_cria();
    p2=pilha_cria();
    p3=pilha_cria();
    pilha_push(p1, 10);
    pilha_push(p1, 20);
    pilha_push(p2, 30);
    //v=topo(p2);
    //concatena_pilhas(p1,p2);
    //p3=copia_pilha(p1);
    pilha_imprime(p3);
    pilha_libera(p1);
    pilha_libera(p2);
    pilha_libera(p3);
    return 0;
}
