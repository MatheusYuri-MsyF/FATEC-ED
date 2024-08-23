#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int * dados;
    int topo;
    int capacidade;
} t_pilha;

void constroi_pilha (t_pilha *, int);

int esta_vazia (const t_pilha *);

int esta_cheia (const t_pilha *);

int tamanho (const t_pilha *);

void empilha (t_pilha *, int);

int desempilha (t_pilha *);

void mostra_pilha(t_pilha *);