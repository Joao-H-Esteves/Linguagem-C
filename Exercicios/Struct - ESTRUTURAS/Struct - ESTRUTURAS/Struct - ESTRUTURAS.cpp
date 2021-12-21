// Struct - ESTRUTURAS.cpp : COMO MANIPILAR STRUCT
// DECLARAÇÃO E MANIPULAR

#include <iostream>

struct horario			// Definindo como será a Struct
	{
		char DiaDaSemana; // PARA CRIAR A STRUCT É NECESSARIO AS CHAVES { }
		int horas;
		int minutos;
		int segundos;
		float decimos;
	};

int teste(void)//vazio
{
	
	struct horario atual;  // Declarando a Struct (dando um nome para ela)
		atual.DiaDaSemana = 'T';
		atual.horas = 13;
		atual.minutos = 34;
		atual.segundos = 47;
		atual.decimos = 0.4835435;
		

		// declarando uma nova Struct e utilizando a "atual" para somar suas variaveis.
		struct horario posterior;
		posterior.DiaDaSemana = 'Q';
		posterior.horas = atual.horas + 5;
		posterior.minutos = atual.minutos + 35;
		posterior.segundos = atual.segundos - 22;
		posterior.decimos = atual.decimos + 0.3242345;


		// MOSTRANDO OS DADOS DA STRUCT NOVA

		printf("Dia da semana = %c \n ", posterior.DiaDaSemana);
		printf("Horario = %d : %d : %d : %.5f\n", posterior.horas, posterior.minutos, posterior.segundos, posterior.decimos);

	system("pause");

 return 0;

}

