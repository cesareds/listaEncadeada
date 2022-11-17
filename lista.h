//
// Created by César de Souza on 16/11/22.
//

#ifndef LISTA_LISTA_H
#define LISTA_LISTA_H
typedef struct no{
    int valor;
    struct no *proximo;
}No;
void inserirNoInicio(No **lista, int num);
void inserirNoFinal(No **lista, int num);
void inserirNoMeio(No **lista, int num, int ant);
void imprimir(No *no);




#endif //LISTA_LISTA_H
