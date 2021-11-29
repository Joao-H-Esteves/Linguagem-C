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
    int lugRest, peopleMax, peopleIN = 0,peopleOut= 0, peopleTot=0,menu,acesso,saida;


    printf("\n <<<< CONTROLE DE ACESSO >>>>\n\n");
    printf("\nDigite a quantidade de lugares disponiveis: ");   //Quantid Max de lugares
    scanf_s("%d", &peopleMax);

    peopleTot = peopleMax;
    do
    {   //  ENTRADA DO MENU 
        system("cls");
        printf("\n 1- ENTRADA DE PESSOAS\n 2- SAIDA DE PESSOAS\n 3- LUGARES DISPONIVEIS\n 4- TOTAL DE ACESSOS\n 5- TOTAL DE SAIDAS\n 0- FINALIZAR PROGRAMA\n ");
        scanf_s(" %d", &menu);

        switch (menu)
        {
        case 1:
            printf("\nQuantidade de pessoas acessando: ");
            scanf_s("%d", &acesso);                             // Pessoas querendo acesso neste momento


            if (peopleIN > peopleMax || acesso > peopleMax )
            {
                printf("\nO local nao comporta essa quantidade de pessoas no momento, aguarde.\n");

            }if (peopleIN == peopleMax)
            {
                printf("\nO local atingiu sua lotacao maxima.\n");

            }else if (acesso <= peopleMax || peopleIN <= peopleMax || acesso < peopleTot)
            { 
                peopleTot += acesso;                              // total de acessos em todo o periodo [CALCULO]

            }else 
            {
                peopleIN += acesso;                              // Pessoas no local no momento
               
            }
           

            break;

        case 2:
            printf("\nQuantidade de pessoas saindo: ");
            scanf_s("%d", &saida);


            if (peopleIN == 0)
            {
                printf("\nO local esta vazio.\n");
            }if (peopleIN < 0)
            {
                printf("\n Erro, o lugar ja esta vazio!\n");
            }if (saida > peopleIN || saida > peopleTot) {
                printf("\n Não existe essa quantidade de pessoas para sair. \n");
            }
            else {
                peopleIN -= saida;                                      //Pessoas que sairam no momento
                peopleOut += saida;                                     //Total de saidas de todo o periodo [CALCULO]
            }
            break;
        case 3:
           
                        
            lugRest = peopleMax - peopleIN;                                 // Quantidade de lugares restante
            printf("\nRestam %d lugares vazios\nLotacao maxima : %d\n", lugRest, peopleMax);
             
            break;

        case 4:
            printf("\nTotal de visitas: %d\n", peopleTot);                // Total de acessos em todo o periodo
            break;

        case 5:
            printf("\n Saidas totais de todo o periodo: %d\n", peopleOut);  //Total de saidas de todo o periodo
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

