// Cadastro de cliente com struct.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.

// Este programa terá Structs aninhadas ( uma dentro da outra)
//
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


struct tp_endereco{
    char rua[40];
    int num;
    char bairro[20];
    char cidade[20];
    char estado[2];
    int cep;
}   end;

struct tp_nascimento{
    int dia;
    int mes;
    int ano;
}   nasc;

// ESTRUTURA PRINCIPAL USADA JUNTO COM VETOR 
struct cadastro_cliente {
    char nome[40];
    int cpf;
    int tel;

    //struct aninhada:
    struct tp_endereco end; // deve nomear a struct
    struct tp_nascimento nasc;

}  
cad_principal[2]; //VETOR PARA ARMAZENAR VARIOS CADASTROS


int main(void)
{
   // LOOPING PARA O CADASTRO DE CLIENTES

    for (int i = 0; i < 2; i++)
    {
        printf("\n-------------- CADASTRO CLINTE VIP --------------\n");
        printf("\n\nNome do cliente.......:");
       // setbuf(stdin, NULL);                          
        _getche();
        fflush(stdin);                          // limpar o puffer do teclado.
        fgets(cad_principal[i].nome, 40, stdin);

        printf("\n\nCPF...................:");
        scanf_s("%d", &cad_principal[i].cpf);

        printf("\n\nTelefone..............:");
        scanf_s("%d", &cad_principal[i].tel);

        printf("\n\nEndereço..............:");
        //fflush(stdin);
        getchar();
        fgets(cad_principal[i].end.rua, 40 , stdin);

        printf("\n\nNumero................:");
        scanf_s("%d", &cad_principal[i].end.num);

        printf("\n\nBairro................:");
        fflush(stdin);
        fgets(cad_principal[i].end.bairro, 20, stdin);

        printf("\n\nCidade................:");
        fflush(stdin);
        fgets(cad_principal[i].end.cidade, 20, stdin);

        printf("\n\nEstado................:");
        fflush(stdin);
        fgets(cad_principal[i].end.estado, 2, stdin);

        printf("\n\nCEP...................:");
        scanf_s("%d", &cad_principal[i].end.cep);

        printf("\n\nDia de Nascimento.....:");
        scanf_s("%d", &cad_principal[i].nasc.dia);

        printf("\n\nMes de Nascimento.....:");
        scanf_s("%d", &cad_principal[i].nasc.mes);

        printf("\n\nAno de Nascimento.....:");
        scanf_s("%d", &cad_principal[i].nasc.ano);

    } // FIM DA COLETA DE DADOS (E LOOPING)

    printf("\n\n....Processando dados ....\n\n");

    system("pause");

    printf("\n-------------- DADOS DO CLINTE --------------\n");

    for (int i = 0; i < 2; i++)
    {
        printf("\nNome do cliente.......: %s", cad_principal[i].nome);
        printf("\nCPF...................: %d", cad_principal[i].cpf);
        printf("\nTelefone..............: %d", cad_principal[i].tel);
        printf("\nEndereço..............: %s", cad_principal[i].end.rua);
        printf("\nNumero................: %d", cad_principal[i].end.num);
        printf("\nBairro................: %s", cad_principal[i].end.bairro);
        printf("\nCidade................: %s", cad_principal[i].end.cidade);
        printf("\nEstado.................: %s", cad_principal[i].end.estado);
        printf("\nCEP...................: %d", cad_principal[i].end.cep);
        printf("\nDia de Nascimento.....: %d", cad_principal[i].nasc.dia);
        printf("\nMes de Nascimento.....: %d", cad_principal[i].nasc.mes);
        printf("\nAno de Nascimento.....: %d", cad_principal[i].nasc.ano);
        printf("\n\n");        
    }

    system("pause");

    return 666;

}

