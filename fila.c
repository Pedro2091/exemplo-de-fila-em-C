#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

#define TAM_FILA 3

int fila[TAM_FILA], ultimaPosicaoVazia=0;

void enfileirar(int valor){

  fila[ultimaPosicaoVazia] = valor;
  ultimaPosicaoVazia++;


}

void exibir(){

  for(int i=0; i<ultimaPosicaoVazia; i++){
    printf("%i\n", fila[i]);
  }

}

int desenfileirar(){

  int removido = fila[0];

  for(int i=0; i < TAM_FILA-1; i++){  
    fila[i] = fila[i+1];
  }

  ultimaPosicaoVazia--;

  return removido;
  
}

int vazia(){

  if(ultimaPosicaoVazia = 0){
    return 1;
  }else{
    return 0;
  }

}

int cheia(){

  if(ultimaPosicaoVazia = TAM_FILA){
    return 1;
  }else{
    return 0;
  }

}


