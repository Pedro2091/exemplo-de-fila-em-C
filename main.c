#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(void) {

  enfileirar(1);
  enfileirar(2);
  enfileirar(3);
  
  exibir();

  int itemDesinfileirado = desenfileirar();

  printf("\nItem %i foi desinfileirado\n\n", itemDesinfileirado);

  exibir();

  esvaziarLista();

  return 0;
}