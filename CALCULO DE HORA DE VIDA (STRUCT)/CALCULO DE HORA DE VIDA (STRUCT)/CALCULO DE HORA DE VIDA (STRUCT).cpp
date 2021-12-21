/* CALCULO DE HORA DE VIDA(STRUCT).cpp : Este programa irá ler a idade do usuário e calcular sua idade em:
       Anos,
       Meses,
       Horas,
       Minutos,
       Segungos.

Vai levar em consideração os anos bissextos .
Vamos usar Estruturas (Structs) para efetuar os calculos.


*/
#include <conio.h>
#include <string.h>
#include <iostream>
#include <stdlib.h> // para usar o 'system("pause")'
#include <time.h>  // para pegar  data da maquina
#include <ctime>
#pragma warning(suppress : 4996)
#pragma warning(disable : 4996)
#define _SECURE_SCL_DEPRECATE 0
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

struct Tempo {
    int sem;
    int horas;
    int min;
    int seg;
}   temp;

struct data{
    int dia;
    int mes;
    int ano;
    struct Tempo temp;
}   usuario, atual, calc; // declaração dos nomes das structs



int main(void)
{
    int anoBix;
    char resp = 'n';


    //ENTRADA DE DADOS
    
    //Dados do nascimento

    while (resp == 'n')
    {
        system("cls");
        puts("######## SISTEMA DE CALCULO DE IDADE ########\n\n");

        puts("\nDigite a data de nascimento:");
        puts("No formato : dd mm aaaa");
        scanf_s("%d %d %d", &usuario.dia, &usuario.mes, &usuario.ano);
        printf("Nascido em %d/ %d/ %d\n", usuario.dia, usuario.mes, usuario.ano);

        // Como não consegui usar a função de pegar a data automaticamnte do sistema (linha 122) fiz manualmente:

        puts("\nDigite a data atual:");
        puts("No formato : dd mm aaaa");
        scanf_s("%d %d %d", &atual.dia, &atual.mes, &atual.ano);
        printf("Hoje e %d/ %d/ %d\n", atual.dia, atual.mes, atual.ano);

        puts("\nOs dados estão corretos? [s]/[n]\n ");
        getchar();
        resp = _getche();
    }

    system("cls");
    puts("\n\n\n\n.................PROCESSANDO.................\n\n\n\n");
    system("pause");


    // PROCESSAMENTO DOS DADOS

    calc.ano = atual.ano - usuario.ano;                              // Idade em anos
    if (atual.mes < usuario.mes)                                     // conta se ainda "NÃO" tiver feito aniversario esse ano
    {
        calc.ano = calc.ano - 1;
        calc.mes = calc.ano * 12 + (12 - usuario.mes + atual.mes);   //idade em meses
    }
    else
    {                                                                // conta caso "JÁ" tenha feito aniversario    
        calc.mes = calc.ano * 12 + (atual.mes - usuario.mes);        //idade em meses
    }

    anoBix = calc.ano / 4;                                           // calculando os anos bissextos 
    if (usuario.dia < atual.dia)
    {
        calc.dia = calc.ano * 365 + anoBix + usuario.dia - atual.dia;     // dias + dias bissextos
    }
    else
    {
        calc.dia = calc.ano * 365 + anoBix + atual.dia - usuario.dia;
    }

    calc.temp.horas = calc.dia * 24;              // quantidade de horas de vida
    calc.temp.min = calc.temp.horas * 60;               // minutos de vida
    calc.temp.seg = calc.temp.min * 60;                 // segundos de vida

    //SAIDA DE DADOS

    system("cls");
    puts("\n\n######## CALCULO DA SUA IDADE ########\n");
    printf("\nIdade em Anos: %d \n\nIdade em meses: %d ", calc.ano, calc.mes);


    printf("\n\n  E voce ja viveu : \n\t-> %d  dias \n  \n\t-> %d horas \n  \n\t-> %d minutos \n  \n\t-> %d segundos\n\n", calc.dia, calc.temp.horas, calc.temp.min, calc.temp.seg);

    printf("\n################ FIM ################\n\n");
    puts("Programa feito por Joao H Esteves\n");

    system("pause");// pausar o programa para não fechar rapidamente

    return 0;

 /*   time_t timer;
    struct tm* horarioLocal;

    time(&timer); // Obtem informações de data e hora
#pragma warning(suppress : 4996)
#pragma warning(disable : 4996)
    horarioLocal = time(&timer);
#define _CRT_SECURE_NO_WARNINGS // Converte a hora atual para a hora local
#pragma warning(suppress : 4996)
#pragma warning(disable : 4996)
    int dia = horarioLocal->tm_mday;
    int mes = horarioLocal->tm_mon + 1;
    int ano = horarioLocal->tm_year + 1900;

    int hora = horarioLocal->tm_hour;
    int min = horarioLocal->tm_min;
    int sec = horarioLocal->tm_sec;

    cout << "Horário: " << hora << ":" << min << ":" << sec << endl;
    cout << "Data: " << dia << "/" << mes << "/" << ano << endl;

*/

}

