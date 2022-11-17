//
// Created by César de Souza on 16/11/22.
//

#include <stdlib.h>
#include <printf.h>
#include "lista.h"
void criarLista(Lista *lista){
    lista->primeiro=NULL;
    lista->tamanho==0;
}
void inserirNoInicio(Lista *lista, int num){
    No *novo = malloc(sizeof (No));

    if(novo){
        novo->valor=num;
        novo->proximo=lista->primeiro;
        lista->primeiro=novo;
        lista->tamanho++;
    } else{
        printf("erro ao alocar memória\n");
    }
}
void inserirNoFinal(Lista *lista, int num){
    No *aux, *novo = malloc(sizeof (No));
    if(novo){
        novo->valor=num;
        novo->proximo=NULL;
        if(lista->primeiro){
            aux = lista->primeiro;
            while(aux->proximo){
                aux=aux->proximo;
            }
            aux->proximo=novo;
        } else{
            lista->primeiro=novo;
        }
        lista->tamanho++;
    } else{
        printf("erro ao alocar memória\n");
    }
}
void inserirNoMeio(Lista *lista, int num, int ant){
    No *aux, *novo = malloc(sizeof (No));
    if(novo){
        novo->valor=num;
        if(lista->primeiro){
            aux = lista->primeiro;
            while(aux->valor!=ant && aux->proximo){
                aux=aux->proximo;
            }
            novo->proximo=aux->proximo;
            aux->proximo=novo;
        }else{
            novo->proximo=NULL;
            lista->primeiro=novo;
        }
        lista->tamanho++;
    } else{
        printf("erro ao alocar memória\n");
    }
}
void imprimir(Lista lista){
    printf("\n--------Lista:--------\n");
    No *aux = lista.primeiro;
    while (aux){
        printf("%i\t", aux->valor);
        aux = aux->proximo;
    }
    printf("\n-----Fim da Lista--------\n");
}
