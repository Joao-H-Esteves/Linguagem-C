// Struct - ESTRUTURAS.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

struct horario			// Definindo como será a Struct
	{
	char DiaDaSemana;
	int horas;
	int minutos;
	int segundos;
	float decimos;
	};

int main()
{




	struct horario atual { // Declarando a Struct (dando um nome para ela)
		atual.DiaDaSemana = 'Q';
		atual.horas = 13;
		atual.minutos = 34;
		atual.segundos = 47;
		atual.decimos = 0.483543589;
		
	};


 return 0;

}

