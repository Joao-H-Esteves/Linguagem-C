// cod PEGR HORA DO SISTEMA.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <time.h>  // para pegar  data da maquina
#include <ctime>
#pragma warning(suppress : 4996)  // COMANDOS DE EXCESSÃO PARA PODER RODAR O CODIGO SE ERROS
#pragma warning(disable : 4996)    // comandos de excessão não estão funcionando
#define _SECURE_SCL_DEPRECATE 0
#define _CRT_SECURE_NO_WARNINGS


int main()
{
    time_t timer;
    struct tm* horarioLocal;

    time(&timer); // Obtem informações de data e hora

    horarioLocal = localtime(&timer);// Converte a hora atual para a hora local

    int dia = horarioLocal->tm_mday;
    int mes = horarioLocal->tm_mon + 1;
    int ano = horarioLocal->tm_year + 1900;

    int hora = horarioLocal->tm_hour;
    int min = horarioLocal->tm_min;
    int sec = horarioLocal->tm_sec;

    /* erro não roda
    cout << "Horário: " << hora << ":" << min << ":" << sec << endl;
    cout << "Data: " << dia << "/" << mes << "/" << ano << endl;
    */
    printf("Horario: %d : %d : %d", hora,min,sec);
    printf("Data: %d / %d/ %d", dia, mes, ano);

}