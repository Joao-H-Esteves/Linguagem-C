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
    char estado[10];
    int cep;
}   end;        // Nome que usaremos paRA CHAMAR A ESTRUTURA NO CODIGO

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

}   cad_principal[2]; //VETOR PARA ARMAZENAR VARIOS CADASTROS


int main(void)
{
   // LOOPING PARA O CADASTRO DE CLIENTES

    for (int i = 0; i < 2; i++)
    {
        puts("\n-------------- CADASTRO CLINTE VIP --------------\n");

        printf("\n\nNome do cliente.......:");
        scanf_s("%40s", cad_principal[i].nome, 40);
       
        printf("\n\nCPF...................:");
        scanf_s("%d", &cad_principal[i].cpf);

        printf("\n\nTelefone..............:");
        scanf_s("%d", &cad_principal[i].tel);

        printf("\n\nEndereço..............:");
        scanf_s("%40s",cad_principal[i].end.rua, 40);

        printf("\n\nNumero................:");
        scanf_s("%d", &cad_principal[i].end.num);

        printf("\n\nBairro................:");        
        scanf_s("%20s",cad_principal[i].end.bairro, 20);

        printf("\n\nCidade................:");       
        scanf_s("%20s",cad_principal[i].end.cidade, 20);

        printf("\n\nEstado................:");        
        scanf_s("%10s",cad_principal[i].end.estado, 10);

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

    return 0;

}

