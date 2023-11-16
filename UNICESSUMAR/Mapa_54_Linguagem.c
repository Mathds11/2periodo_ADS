#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

//Registro
struct Consulta {
    char nome[100];
    int dia;
    int hora;
};

//Variaveis Globais
struct Consulta agenda[300];
int qtdAgendamento;

bool verificarDisponibilidade(int diaAgenda, int horaAgenda){

        if(horaAgenda < 8){
            printf("Clinica fechada neste horario\n");
            return false;
        }
        return true;
}

void agendarConsulta(){

    int diaAgenda;
    printf("Qual dia do mes voce qer agendar?\n");
    fflush(stdin);
    scanf("%d", &diaAgenda);

    int horaAgenda;
    printf("Qual hora do dia voce quer agendar?\n");
    fflush(stdin);
    scanf("%d", &horaAgenda);

    if(verificarDisponibilidade(diaAgenda, horaAgenda)){
        printf("Horario disponivel\n");
        printf("Vamos confirmar seu agendamento\n");
        agenda[qtdAgendamento].dia = diaAgenda;
        agenda[qtdAgendamento].hora = horaAgenda;
        printf("Qual seu nome:\n");
        fflush(stdin);
        gets(agenda[qtdAgendamento].nome);
        qtdAgendamento = qtdAgendamento + 1;
        printf("Agendamento realizado!\n");        
    } else{
        printf("Horario não disponivel\n");
    }
}

void listarConsulta(){
    int i;
    for(i = 0; i < qtdAgendamento; i++){
        printf("=============================\n");
        printf("Nome: %s\n, agenda[i].nome");
        printf("Dia: %d\n, agenda[i].dia");
        printf("Hora: %d\n, agenda[i].hora");
    }
}

void main() {

    setlocale(LC_ALL, "");

    int opcao;
    qtdAgendamento = 0;

    do{
        printf("Deseja uma opção desejada?\n");
        printf("1  - Agendar\n");
        printf("2  - Listar\n");
        printf("3  - Sair\n");
        fflush(stdin);
        scanf("%d", &opcao);

        switch(opcao){
            case 1:{
                agendarConsulta();

            }case 2:{
                listarConsulta();

            }case 3:{
                printf("Saindo do programa...\n");

            }
            default :{
                printf("Opcao invalida\n");
            }
        }
    }while (opcao != 3);
}