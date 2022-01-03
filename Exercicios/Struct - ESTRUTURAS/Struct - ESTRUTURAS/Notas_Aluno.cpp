#include <stdio.h>
#include <conio.h>




int main(void)
{
    /*TIPO DE DADO = STRUCT

DEFINIÇÃO  DA struct */
    struct ficha_de_aluno
    {
        char nome[50];
        char disciplina[30];
        float nota_prova1;
        float nota_prova2;
    }   aluno; 

    /*Criando a variável aluno que será do
    tipo struct ficha_de_aluno */
    struct ficha_de_aluno aluno;
    


    printf("\n---------- Cadastro de aluno -----------\n\n\n");

    printf("Nome do aluno ......: ");
    fflush(stdin);

    /*usaremos o comando fgets() para ler strings, no caso o nome
    do aluno e a disciplina
    fgets(variavel, tamanho da string, entrada)
    como estamos lendo do teclado a entrada é stdin (entrada padrão),
    porém em outro caso, a entrada tambem poderia ser um arquivo */

    fgets(aluno.nome, 40, stdin);

    printf("Disciplina ......: ");
    fflush(stdin);
    fgets(aluno.disciplina, 39, stdin);

    printf("Informe a 1a. nota ..: ");
    scanf_s("%f", &aluno.nota_prova1);

    printf("Informe a 2a. nota ..: ");
    scanf_s("%f", &aluno.nota_prova2);

    printf("\n\n --------- Lendo os dados da struct ---------\n\n");
    printf("Nome ...........: %s", aluno.nome);
    printf("Disciplina .....: %s", aluno.disciplina);
    printf("Nota da Prova 1 ...: %.2f\n", aluno.nota_prova1);
    printf("Nota da Prova 2 ...: %.2f\n", aluno.nota_prova2);

    _getche();
    return(0);
}