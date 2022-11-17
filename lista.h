//
// Created by César de Souza on 16/11/22.
//

#ifndef LISTA_LISTA_H
#define LISTA_LISTA_H
typedef struct no{
    int valor;
    struct no *proximo;
}No;
typedef struct{
    No *primeiro;
    int tamanho;
}Lista;
void criarLista(Lista *lista);
void inserirNoInicio(Lista *lista, int num);
void inserirNoFinal(Lista *lista, int num);
void inserirNoMeio(Lista *lista, int num, int ant);
void imprimir(Lista lista);


#endif //LISTA_LISTA_H
