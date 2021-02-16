#include <stdio.h>
#include <stdlib.h>
#define INICIO 0
#define MAXTAM 1000

typedef struct {
 int chave;
 /* outros componentes */
} TItem;

typedef struct {
 TItem item[MAXTAM];
 int primeiro, ultimo;
} TLista;

/* procedimentos e funcoes da TAD */
void TLista_Criar(TLista *pLista);
int TLista_EhVazia(TLista *pLista);
int TLista_Insere(TLista *pLista, TItem x);
int TLista_Retira(TLista *pLista, int p, TItem *pX);
void TLista_Imprime(TLista *pLista);
int Tlista_Get(TLista *pLista, int p, TItem *pX);
int Tlista_Tamanho(TLista *pLista);