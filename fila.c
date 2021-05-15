#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

#define TAM_FILA 3

int fila[TAM_FILA], ultimaPosicaoVazia=0;

void enfileirar(int valor){

  if(!cheia()){
    fila[ultimaPosicaoVazia] = valor;
    ultimaPosicaoVazia++;
  }else{
    printf("Esta lista esta cheia");
  }

}

void exibir(){

  if(!vazia()){
    for(int i=0; i<ultimaPosicaoVazia; i++){
      printf("%i\n", fila[i]);
    }
  }else{
    printf("Esta lista esta vazia");
  }

}

int desenfileirar(){

  if(!vazia()){
    int removido = fila[0];

    for(int i=0; i < TAM_FILA-1; i++){  
      fila[i] = fila[i+1];
    }

    ultimaPosicaoVazia--;

    return removido;
  }else{
    printf("Esta lista esta vazia");
  }
}

int vazia(){

  if(ultimaPosicaoVazia == 0){
    return 1;
  }else{
    return 0;
  }

}

int cheia(){
  
  if(ultimaPosicaoVazia == TAM_FILA){
    return 1;
  }else{
    return 0;
  }

}

void esvaziarLista(){

  if(!vazia()){  
    for(int i=0; i<TAM_FILA; i++){
      fila[i] = 0;
    }

    ultimaPosicaoVazia = 0;

    printf("Lista Vazia!");
  }else{
    printf("Esta lista ja esta Vazia!");
  }
}