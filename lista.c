//
// Created by César de Souza on 16/11/22.
//

#include <stdlib.h>
#include <printf.h>
#include "lista.h"

void inserirNoInicio(No **lista, int num){
    No *novo = malloc(sizeof (No));

    if(novo){
        novo->valor=num;
        novo->proximo=*lista;
        *lista=novo;
    } else{
        printf("erro ao alocar memória\n");
    }
}
void inserirNoFinal(No **lista, int num){
    No *aux, *novo = malloc(sizeof (No));
    if(novo){
        novo->valor=num;
        novo->proximo=NULL;
        if(*lista){
            aux = *lista;
            while(aux->proximo){
                aux=aux->proximo;
            }
            aux->proximo=novo;
        } else{
            *lista=novo;
        }
    } else{
        printf("erro ao alocar memória\n");
    }
}
void inserirNoMeio(No **lista, int num, int ant){
    No *aux, *novo = malloc(sizeof (No));
    if(novo){
        novo->valor=num;
        if(*lista){
            aux = *lista;
            while(aux->valor!=ant&&aux->proximo){
                aux=aux->proximo;
            }
            novo->proximo=aux->proximo;
            aux->proximo=novo;
        }else{
            novo->proximo=NULL;
            *lista=novo;
        }
    } else{
        printf("erro ao alocar memória\n");
    }
}
void imprimir(No *no){
    printf("\n--------Lista:--------\n");
    while (no){
        printf("%i\t", no->valor);
        no = no->proximo;
    }
    printf("\n-----Fim da Lista--------\n");
}
