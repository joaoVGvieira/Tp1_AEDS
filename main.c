#include <stdio.h>
#include <stdlib.h>
#include "Libs/lista_Processos.h"
#include "Libs/arquivos.h"
#include "Libs/menu.h"
int main(void){
    int operacao_sistema;
    clock_t tempo_execu;
    tempo_execu = clock();
    //("arquivo_teste/teste.txt"); se for usar de outra pasta usa assim
    char arquivo_saida[1000];
    do
    {
        printf("\n");
        menu();
        scanf("%d",&operacao_sistema);
        switch (operacao_sistema) {
        case 0:
            printf("\n\n-----Volte sempre!!!-----\n\n"); 
            break;
        case 1:
            printf("\n");
            menu_interativo();
            break;
        case 2:
            tempo_execu = clock();
            ler();
            menu_arquivo();
            tempo_execu =  clock()- tempo_execu;
            escreve_arquivo_tempo(tempo_execu);
            break;  
        default:
            printf("\n\n-----Opção inválida!!!!-----\n\n");
        }
    } while (operacao_sistema!=0);
    system("pause");
    return 0;
}
