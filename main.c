#include <stdio.h>
#include <stdlib.h>
#include "Libs/lista_Processos.h"
#include "Libs/arquivos.h"
#include "Libs/menu.h"
int main(void){

    int operacao_sistema,num;
    char nome[] = ("arquivo_teste/teste100000.txt"); 
    do {
    menu();
    scanf("%d",&operacao_sistema);
    switch (operacao_sistema) {
        case 0:
        printf("\n\n-----Volte sempre!!!-----\n\n"); 
            break;
        case 1: 
            num = 10;
            cria_lista_processo(num);
            break;
        case 2: 
            ler(nome);
            break;
        default:
            printf("\n\n-----Opção inválida!!!!-----\n\n");
    }
} while (operacao_sistema != 0);

    system("pause");
    return 0;
}
