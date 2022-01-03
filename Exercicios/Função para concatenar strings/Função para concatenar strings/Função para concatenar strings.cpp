// Função para concatenar strings.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
// Esse exercicio irá usar uma função (void) para juntar duas strings

#include <iostream>

int main()
{
    //declarando a função
    void concatenarString(char string01[], int tam01,
                          char string02[], int tam02,
                          char string03[]);

    // declaração das variaveis globais
    char palavra1[]= { 'J','o','a','o',' ' };          //Não há necessidade de declara a quantidade de caracteres quando vc já declarou eles
    char palavra2[] = { 'H','e','n','r','i','q','u','e' };
    char palavraNova[13];                               // Como não há nada declarado, deve-se apontar o numeros de caracteres

    //Chamando a função
    concatenarString(palavra1, 5, palavra2, 8, palavraNova);

    for (int i = 0; i < 13; i++)
    {
        printf( " %c", palavraNova[i]);
    }

    printf("\n");

    system("pause");

    return 0;
}

//construindo a função
void concatenarString(char string01, int tam01,char string02, int tam02,char string03)
{
    int i, j;

    for (i = 0; i < tam01; i++) // limitar o ciclo com o tamanho da string 1, usando o int que mostra o tamanho
    {
        string03[i] = string01[i]; // vamos pegar o conteudo da string01 e jogra dentro da string03
    }
    for (j = 0; j < tam02; j++)
    {
        string03[tam01 + j] = string02[i];
    }
}
