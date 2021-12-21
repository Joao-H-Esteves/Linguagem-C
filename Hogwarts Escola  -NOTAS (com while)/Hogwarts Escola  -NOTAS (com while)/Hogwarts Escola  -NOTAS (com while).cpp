// ConsoleApplication1.cpp : Este arquivo contém a função 'main'.

/* Este programa solicita 3 notas por aluno , faz a média e compara com a nota de corte s foi APROVADO ou REPROVADO, com laço de repetição while*/

#include <iostream>
#include <conio.h>
#include <string.h>

int main(void)
{

	char resp = 's';
	char nome[30] = "";
	bool isFirst = true;
	while (resp == 's')
	{
		float nota, soma = 0, media = 0;
		
		//memset(nome, 0, strlen(nome)); // zerar a string
		printf("\n\n ** Hogwarts Escola para Bruxos ** \n"); // cabeçalho
		printf("\n\t * SISTEMA DE NOTAS * \n");

		printf("\nNome do Bruxo aluno: ");
		if (!isFirst)
			getchar();
		gets_s(nome);							// pegar string com espaço

		for (int i = 1; i < 4; i++)					//~entrada das notas 
		{

			printf("\n Digite a nota %d : ", i);
			scanf_s(" %f", &nota);
			soma += nota;							//soma das notas
		}

		media = soma / 3;							//calculo da media

		printf("\n Media desse aluno/bruxo : %.2f\n\n", media);

		if (media >= 6)
		{
			printf("\n<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>");
			printf("\n\n Aluno/bruxo %s APROVADO", nome);
			printf("\nEncaminhe formulario para Alvo Dumbledore\n\n");
			printf("\n<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>");
		}
		else {
			printf("\n<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>");
			printf("\n\n Aluno/Bruxo %s REPROVADO", nome);
			printf("\nEncaminhar o Bruxo a recuperacao\n\n");
			printf("\n<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>");
		}
		printf("\n\nDeseja inserir notas de outro aluno? [s]/[n]");
		if (!isFirst)
			getchar();
		resp = _getche();
		isFirst = false;
	}
	return 0;
}