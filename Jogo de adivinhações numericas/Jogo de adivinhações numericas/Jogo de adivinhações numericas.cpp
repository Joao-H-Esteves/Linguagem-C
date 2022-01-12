// Jogo de adivinhações numericas.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.

/*Este programa irá utilizar o comando rand() para gerar numeros aleatorios, onde o objetivo é acertar o numero gerado .
    O programa contará com 3 niveis de dificuldades.

    > Hard (0 a 1000)
    > Medium (0 a 100)
    > Ease (0 a 10)
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>// biblioteca necessaria para usar o rand()
#include <time.h>  // necessario para usar a função time



int menu()
{
    system("cls");

    int opcao = 0;
    while (opcao == 0)
    {

        printf("\n |** BEM VINDO AO JOGO DE ADVINHACAO NUMERICA **|");
        printf("\n |----------------------------------------------|");
        printf("\n |            *** ACHE O CORINGA ***            |");
        printf("\n |----------------------------------------------|");
        printf("\n |         *** ESCOLHA A DIFICULDADE ***        |");
        printf("\n |----------------------------------------------|");
        printf("\n | 1 - Facil (0 a 10)                           |");
        printf("\n | 2 - Medio (0 a 100)                          |");
        printf("\n | 3 - Dificil (0 a 1000)                       |");
        printf("\n | 4 - Regras                                   |");
        printf("\n | 5 - Sair                                     |");
        printf("\n |----------------------------------------------|");
        printf("\n\n Digite o numero da opcao desejada: ");
        scanf_s("%d", &opcao);

        if (opcao <0 || opcao >5)
        {
            system("cls");
            printf("\n Opcao %d, invalida!", opcao);
            puts("\n Informe uma opcao numerica valida entre 1 a 5.\n");
            opcao = 0;
            
        }
       
    }
    return opcao;
}

int JOGO(int dificult)
{
    int ale,num, tent=0;
    srand((unsigned)time(NULL)); // comando para vaiar o numero aleatorio
    ale = rand() % dificult;          // Comando para gerar um numero pelo sistema
    do
    {       
        printf("\n |------------ Tentativa numero  %d  ------------|", tent);
        printf("\n |---------      Digite a abaixo      ----------|\n");
        scanf_s("%d", &num);

        if (num < 0 || num >dificult)
        {           
            printf("\n |-------------- NUMERO INVALIDO ---------------|");
        }
        if (num< ale)
        {            
            printf("\n |----- O CORINGA e maior que o seu numero -----|");
        }
        if(num > ale)
        {
            printf("\n |----- O CORINGA e menor que o seu numero -----|");
        }
        tent++;
    } while (num != ale);

    printf("\n |          PARABENS, VOCE ACERTOU !!!          |");
    printf("\n |          Numero de tentativas: %d             |\n\n",tent);

    system("pause");

    return (menu());    
}



int main()
{
    int opcao = 0;
    do
    {       
    opcao = menu();
    
    switch (opcao)
    {
    case 1:
        system("cls");
        printf("\n |------------------MODO FACIL------------------|");
        printf("\n |--------- Escolha um numero de 0 a 10 --------|");
        
        JOGO(11);
        break;
    case 2:
        system("cls");
        printf("\n |------------------MODO MEDIO------------------|");
        printf("\n |-------- Escolha um numero de 0 a 100 --------|");
               
        JOGO(101);
        break;
    case 3:
        system("cls");
        printf("\n |-----------------MODO DIFICIL-----------------|");
        printf("\n |-------- Escolha um numero de 0 a 1000 -------|");
        
        JOGO(1001);
        break;
    case 4:
        system("cls");
        puts("\n |----------------REGRAS DO JOGO----------------|");
        puts("\n | Este jogo funciona com tentativas e erros.   |");
        puts("\n | O algoritimo vai te dizer se o seu numero    |");
        puts("\n | esta a cima ou a baixo do valor CORINGA. No  |");
        puts("\n | final mostrara a quantidade de tentativas    |");
        puts("\n | feitas ate o acerto. Bom jogo!               |\n\n");

        system("pause");
        return menu();

    default:
        puts("\n |-----------------   ATENCAO   ------------------|");
        puts("\n | Comando invalido, digite um numero entre 1 a 5 |");

        return menu();
        break;
    }
    } while (opcao != 5);
   

    return 0;
}

