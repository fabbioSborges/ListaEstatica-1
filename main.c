#include <stdio.h>
#include "lista.h"

int main(void) {
  TLista lista1;
  TLista_Criar(&lista1);
  printf("Tamanho: %d\n", Tlista_Tamanho(&lista1));
  TItem item;
  item.chave = 10;
  TLista_Insere(&lista1, item);
  item.chave = 11;
  TLista_Insere(&lista1, item);
  item.chave = 13;
  TLista_Insere(&lista1, item);
  printf("Tamanho: %d\n", Tlista_Tamanho(&lista1));
  printf("Hello World\n");
  TLista_Imprime(&lista1);
  TLista_Retira(&lista1, 1, &item);
  TLista_Imprime(&lista1);
  
  return 0;
}