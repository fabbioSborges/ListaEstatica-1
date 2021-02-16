#include "lista.h" 

void TLista_Criar(TLista *pLista) {
  pLista->primeiro = INICIO;
  pLista->ultimo = pLista->primeiro;
}

int TLista_EhVazia(TLista *pLista) {
  return (pLista->ultimo == pLista->primeiro);
}

int TLista_Insere(TLista *pLista, TItem x) {
  if (pLista->ultimo == MAXTAM)
    return 0; /* lista cheia */
  pLista->item[pLista->ultimo] = x;
  pLista->ultimo++;
  return 1;
}

int TLista_Retira(TLista *pLista, int p, TItem *pX) {
  if (TLista_EhVazia(pLista) || p >= pLista->ultimo)
    return 0;
  int cont;
  *pX = pLista->item[p];
  pLista->ultimo--;
  for (cont = p+1; cont <= pLista->ultimo; cont++)
    pLista->item[cont - 1] = pLista->item[cont];
  return 1;
}

void TLista_Imprime(TLista *pLista) {
  int i;
  for (i = pLista->primeiro; i < pLista->ultimo; i++)
    printf("%d\n", pLista->item[i].chave);
}

int Tlista_Tamanho(TLista *pLista){
  return pLista->ultimo;
}