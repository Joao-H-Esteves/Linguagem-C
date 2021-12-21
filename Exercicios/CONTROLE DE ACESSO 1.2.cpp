/*ESTE PROGRAMA VAI LER A QUANTIDADE DE LUGARES EM UM determinado LOCAL E FAZER A CONTABILIDADE DE ENTRADA E SAIDA .
        SOMAR ENTRADA
        DEBITAR SAIDA
        LUGARES VAGOS
        QUANTID total de ENTRADA / SAIDA

*/

#include <iostream>
#include <conio.h>

int main()
{
    // VARIAVEIS
    int lugRest, MaxPeople, Insade = 0, peopleTot = 0, menu, In_Out = 0 ;


    printf("\n <<<< CONTROLE DE ACESSO >>>>\n\n");
    printf("\nDigite a quantidade de lugares disponiveis: ");   //Quantid Max de lugares
    scanf_s("%d", &MaxPeople);

    lugRest = MaxPeople;

    do
    {   //  ENTRADA DO MENU 
        system("cls");
        printf("\n <<<< CONTROLE DE ACESSO >>>>\n\n");
        printf("\n 1- ENTRADA DE PESSOAS\n 2- SAIDA DE PESSOAS\n 3- LUGARES DISPONIVEIS\n 4- TOTAL DE ACESSOS\n 0- FINALIZAR PROGRAMA\n ");
        scanf_s(" %d", &menu);

        switch (menu)
        {
        case 1:
            printf("\nQuantidade de pessoas acessando: ");
            scanf_s("%d", &In_Out);                             // Pessoas querendo acesso neste momento
                                   
            if (Insade > MaxPeople || In_Out > lugRest)
            {
                printf("\nO local nao comporta essa quantidade de pessoas no momento, aguarde.\n");

            }
            if (Insade == MaxPeople)
            {
                printf("\nO local atingiu sua lotacao maxima.\n");

            }

             if (In_Out <= MaxPeople || In_Out <= lugRest && Insade <= MaxPeople)
            {
                Insade += In_Out;                              // Pessoas no local no momento
                peopleTot += In_Out;                              // total de acessos em todo o periodo [CALCULO]

                   if (In_Out <= lugRest)
                    {               
                    lugRest -= In_Out;                                 // Quantidade de lugares restante
                    }
            }         
            break;

        case 2:
            printf("\nQuantidade de pessoas saindo: ");
            scanf_s("%d", &In_Out);


            if (Insade <= 0)
            {
                printf("\nO local esta vazio.\n");
            }            
            if (In_Out > Insade || In_Out > peopleTot)
            {
                printf("\n Não existe essa quantidade de pessoas para sair. \n");
            }
            if( In_Out <= Insade)
            {
                Insade -= In_Out;                                      //Pessoas que sairam no momento
                lugRest += In_Out;
            }
            break;

        case 3:                       
            printf("\nRestam %d lugares vazios\nLotacao maxima : %d\n\n\n", lugRest, MaxPeople);

            break;

        case 4:
            printf("\nTotal de visitas no dia: %d\n", peopleTot);                // Total de acessos em todo o periodo
            printf("Pessoas atualmente no local : %d\n\n\n", Insade);                // Pessoas no local no momento
            break;
                    
        case 0:
            printf("\nSaindo do programa....\n");
            break;

        default:
            printf("\nERRO. DIGITE UM NUMERO VALIDO [0 a 5]\n");
            break;
        }
        system("pause");

    } while (menu != 0);
    //FIM DO MENU

    printf("\n---------------------------------\n Obrigado por usar este programa.\n---------------------------------\n ");
    printf("Developer: Joao H G Esteves.\n\n ");

    system("pause");


    return 0;
}

