#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int PID;
    //depois olha tempo
    int Prioridade;
} Processos; 



void implementar(Processos *Processo, int PID, int Prioridade);

//void cadastro(ContaBancaria *Conta, int numero, float saldo, char *nome, char *cpf, char *tipoconta, int ano);

/*
---------Alocar o processor-----------------
PID: Aleatorio
Prioridade: Aleatorio(1 a 5);
hora: Não tenho ideia de como fazer ainda
*/

//PID:
void set_PID(Processos *Processo);
int get_PID(Processos *Processo);

//Prioridade:

void set_Prioridade(Processos *Processo);
int get_Prioridade(Processos *Processo);


//set(definir valor na variável) PID
//set(definir valor na variável) tempo
//set(definir valor na variável) prioridade

//get(pegar valor da variável) PID
//get(pegar valor da variável) tempo