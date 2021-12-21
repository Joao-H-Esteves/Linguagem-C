// Comportamento de Argumentos com Funções.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
// Exemplo de como as variaveis se comportam apos retornarem de um argumento de função.

#include <iostream>

int main(void)
{
    void retornoDeArgumento(int x, int array[]);
    int x= 10;    int array[3] = { 10 };

   

    printf("A Variavel Global = %d\n", x);
    printf("O Vetor Glogal  = %d \n\n", array[0]); // variaveis sem alteração

    retornoDeArgumento(x, array);                   // argumentos alterados pela função

    printf("Depois de chamar a funcao\n");

    printf("A Variavel Global = %d\n", x);          // variavel x retorna ao original
    printf("O Vetor Glogal  = %d \n\n", array[0]);  // vetor fica alterado.

    system("pause");

    return 666;
}
void retornoDeArgumento(int x, int array[]) {
    x += 10;
    array[0] = 20;

    printf("A Variavel dentro da funcao ficou  %d\n", x);
    printf("O Vetor dentro da funcao ficou   = %d \n\n", array[0]);
}
/* Se não retornar um tipo de dado da função para o algoritimo principal vai acontecer isso :
    A variavel X vai ser apenas uma cópia da original, e não vai alterar ela.
    Já o vetor ficá madificado mesmo não retornando nada ao codigo principal.

*/