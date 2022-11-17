#include <stdio.h>
#include "lista.h"

int main() {
    int opcao=0, valor, anterior;
    Lista lista;
    criarLista(&lista);
    do{
        printf("\n0-sair\n1-inserir no inicio\n2-inserir no final\n3-inserir no meio\n4-imprimir\n");
        scanf(" %i", &opcao);
        switch (opcao) {
            case 0:
                printf("\nencerrando...\n");
                break;
            case 1:
                printf("\nInsira o valor a ser inserido no inicio:\n");
                scanf(" %i", &valor);
                inserirNoInicio(&lista, valor);
                break;
            case 2:
                printf("\nInsira o valor a ser inserido no final:\n");
                scanf(" %i", &valor);
                inserirNoFinal(&lista, valor);
                break;
            case 3:
                printf("\nInsira o valor a ser inserido no meio:\n");
                scanf(" %i", &valor);
                printf("\nSerá inserido após qual valor?\n");
                scanf(" %i", &anterior);
                inserirNoMeio(&lista, valor, anterior);
                break;
            case 4:
                imprimir(lista);
                break;
            default:
                printf("\nopcao inválidan\n");
                break;

        }
    }while(opcao!=0);
    return 0;
}
