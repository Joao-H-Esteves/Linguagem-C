// 5.1 - Exercicio 12 ( nascimento em horas): ESCREVA UM PROGRAMA QUE LEIA O ANO DE NASCIMENTO DE UMA PESSOA.
// CALCULAR E APRESENTAR A QUANTIDADE DE DIAS, HORAS, MINUTOS E SEGUNDOS QUE A PESSOA TEM.
//

#include <iostream>
#include <stdlib.h> // para usar o 'system("pause")'
#include <time.h>  // para pegar  data da maquina

int main()
{
    
    // VARIAVEIS
    int ano_Nasc, mes_Nasc, dia_Nasc;
    int ano_Atual, mes_Atual, dia_Atual;
    int  ANO, meses, dias, horas, min, seg, ano_Bix;

    //Dados do nascimento
    printf("\nDigite o Ano do seu nascimento [XXXX]:");
        scanf_s("%d", &ano_Nasc);
    printf("\nDigite o mes do seu nascimento [XX]:");
        scanf_s("%d", &mes_Nasc);
    printf("\nDigite o dia do seu nascimento [XX]:");
        scanf_s("%d", &dia_Nasc);
    
        //Dados dias atuais
    printf("\nDigite o Ano atual [XXXX]:");
        scanf_s("%d", &ano_Atual);
    printf("\nDigite o mes atual [XX]:");
        scanf_s("%d", &mes_Atual);
    printf("\nDigite o dia atual [XX]:");
        scanf_s("%d", &dia_Atual);

        // PROCESSAMENTO DOS DADOS
           
        ANO = ano_Atual - ano_Nasc;     // Idade em anos
        if (mes_Atual < mes_Nasc)       // conta se ainda NÃO tiver feito aniversario esse ano
            {
            ANO = ANO - 1;
            meses = ANO * 12 + (12 - mes_Nasc + mes_Atual); //idade em meses
        }
        else
        {                               // conta caso já tenha feito aniversario    
            meses = ANO * 12 + (mes_Atual - mes_Nasc);      //idade em meses
        }

        ano_Bix = ANO / 4;             // calculando os anos bissextos 
        if (dia_Nasc < dia_Atual)
        {
            dias = ANO * 365 + ano_Bix +  dia_Nasc - dia_Atual;     // dias + dias bissextos
        }
        else
        {
            dias = ANO * 365 + ano_Bix + dia_Atual - dia_Nasc;
        }
        
        horas = dias * 24;              // quantidade de horas de vida
        min = horas * 60;               // minutos de vida
        seg = min * 60;                 // segundos de vida

       

        printf("\n\n#### CALCULANDO ####\n\n");
        printf("Voce ja viveu :\n %d anos\n ou \n %d meses \n ou \n %d  dias \n ou \n %d horas \n ou \n %d minutos \n ou \n %d segundos\n\n", ANO,meses,dias,horas,min,seg);

        printf("\n####### FIM #######\n\n");

        system("pause");// pausar o programa para não fechar rapidamente

        return 0;
}

