// Cadastro de cliente com struct.cpp : Este arquivo contém a função 'main'.A execução do programa começa e termina ali.

// Este programa terá Structs aninhadas ( uma dentro da outra)
//
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


struct tp_endereco {
    char rua[40];
    int num;
    char bairro[20];
    char cidade[20];
    char estado[10];
    int cep;
}   end;        // Nome que usaremos para CHAMAR A ESTRUTURA NO CODIGO

struct tp_nascimento {
    int dia;
    int mes;
    int ano;
}   nasc;

// ESTRUTURA PRINCIPAL USADA JUNTO COM VETOR 
struct cadastro_cliente {
    char nome[40];
    char cpf[11];
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
        memset(cad_principal[i].nome, 0, strlen(cad_principal[i].nome));
        gets_s(cad_principal[i].nome);
        //scanf_s(" %40s%*c", cad_principal[i].nome, 40); erro ao dar espaço

        fflush(stdin);      //Limpar Buffer

        printf("\n\nCPF...................:");
        memset(cad_principal[i].cpf, 0, strlen(cad_principal[i].cpf));
        gets_s(cad_principal[i].cpf);
        //scanf_s("%11s%*c", &cad_principal[i].cpf,11);

        fflush(stdin);

        printf("\n\nTelefone..............:");
        scanf_s(" %d%*c", &cad_principal[i].tel);

        fflush(stdin);

        printf("\n\nEndereço..............:");
        memset(cad_principal[i].end.rua, 0, strlen(cad_principal[i].end.rua));
        gets_s(cad_principal[i].end.rua);
        //scanf_s(" %40s%*c", cad_principal[i].end.rua, 40);

        fflush(stdin);

        printf("\n\nNumero................:");
        scanf_s(" %d%*c", &cad_principal[i].end.num);

        fflush(stdin);

        printf("\n\nBairro................:");
        memset(cad_principal[i].end.bairro, 0, strlen(cad_principal[i].end.bairro));
        gets_s(cad_principal[i].end.bairro);
        //scanf_s(" %20s%*c", cad_principal[i].end.bairro, 20);

        fflush(stdin);

        printf("\n\nCidade................:");
        memset(cad_principal[i].end.cidade, 0, strlen(cad_principal[i].end.cidade));
        gets_s(cad_principal[i].end.cidade);
        //scanf_s(" %20s%*c", cad_principal[i].end.cidade, 20);

        fflush(stdin);

        printf("\n\nEstado(xx)............:");
        memset(cad_principal[i].end.estado, 0, strlen(cad_principal[i].end.estado));
        gets_s(cad_principal[i].end.estado);
        //scanf_s(" %10s%*c", cad_principal[i].end.estado, 10);

        fflush(stdin);

        printf("\n\nCEP...................:");
        scanf_s(" %d%*c", &cad_principal[i].end.cep);

        fflush(stdin);

        printf("\n\nDia de Nascimento(xx).:");
        scanf_s(" %d%*c", &cad_principal[i].nasc.dia);

        fflush(stdin);

        printf("\n\nMes de Nascimento(xx).:");
        scanf_s(" %d%*c", &cad_principal[i].nasc.mes);

        fflush(stdin);

        printf("\n\nAno de Nascimento(xxxx):");
        scanf_s(" %d%*c", &cad_principal[i].nasc.ano);


    } // FIM DA COLETA DE DADOS (E LOOPING)

    printf("\n\n....Processando dados ....\n\n");

    system("pause");

    printf("\n-------------- DADOS DO CLINTE --------------\n");

    for (int i = 0; i < 2; i++)
    {
        printf("\nNome do cliente.......: %s", cad_principal[i].nome);
        printf("\nCPF...................: %s", cad_principal[i].cpf);
        printf("\nTelefone..............: %d", cad_principal[i].tel);
        printf("\nEndereco..............: %s", cad_principal[i].end.rua);
        printf("\nNumero................: %d", cad_principal[i].end.num);
        printf("\nBairro................: %s", cad_principal[i].end.bairro);
        printf("\nCidade................: %s", cad_principal[i].end.cidade);
        printf("\nEstado................: %s", cad_principal[i].end.estado);
        printf("\nCEP...................: %d", cad_principal[i].end.cep);
        printf("\nDia de Nascimento.....: %d", cad_principal[i].nasc.dia);
        printf("\nMes de Nascimento.....: %d", cad_principal[i].nasc.mes);
        printf("\nAno de Nascimento.....: %d", cad_principal[i].nasc.ano);
        printf("\n\n");
    }

    system("pause");

    return 0;

}