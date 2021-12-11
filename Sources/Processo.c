#include "../Libs/Processo.h"
#include <stdio.h>
#include <stdlib.h>
#include "../Libs/tempo.h"

void implementar(Processos *Processo, int PID,int hora, int min, int seg, int Prioridade){
    set_PID(Processo);
    
    set_Prioridade(Processo);
}
// Abaixo estou usando rand() % 9999 para gerar um PID aleatorio de 0 ate 9999.
void set_PID(Processos *Processo){
     Processo->PID = rand() % 9999;
}
int get_PID(Processos *Proceso){
    return Proceso->PID;
}

// Funcao abaixo limita o cunjuto entre [1,5];
void set_Prioridade(Processos *Processo){
    Processo->Prioridade= 1 + rand() % 5;
}

int get_Prioridade(Processos *Proceso){
    return Proceso->Prioridade;
}