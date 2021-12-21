// VAMOS FAZER UMA FUNÇÃO QUE POSSO ORDENAR UM VETOR PRÉVIAMENTE DECLARADO COM SEUS NUMERO FORAM DE ORDEM
//

#include <iostream>
#include <locale.h>

int main()
{
	int vetor[10] = { 6,4,1,9,8,0,5,7,3,2 };
	
	void ordemCrescente(int vetor[], int n); 
		// aqui declaramos a função , o vetor [] esta vazio porque não há necessidade de identificar a quand de numero
		// A identificação só é necessaria quando é uma matriz .

	ordemCrescente(vetor, 10); // não precisa do [ ]

	for (int i = 0; i < 10; i++)
	{
		printf(" %d", vetor[i]);
	}

	system("pause");

	return 666;
}
void ordemCrescente(int vetor[], int n)
{
	int i, j, temporaria=0;

	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (vetor[i] > vetor[j])

				temporaria = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = temporaria;
		}
	}
}
/*
EXPLICAÇÃO DA FUNÇÃO:
{ 6,4,1,9,8,0,5,7,3,2 }
o vetor [i] séra o 1o numero, o [j] o numero logo em seguida
Dentro do laço for o algoritimo irá testar se o 1o numero é maior que o 2o, caso seja , ele vai jogar ele para a 2a casa e o num da 2a casa vai para a primeira...
Fará isso ate que acabe as posições, mantendo o looping ate passar por todos os numeros.

Ex:

	O 6 é maior que 4 ? Sim { 4,6,1,9 ...
	O 6 é maior que 1 ? Sim { 4,1,6,9 ...
	O 6 é maior que 9 ? Não { 4,1,6,9 ... O laço é reiniciado...
	O 4 é maior que 1? Sim  { 1,4,6,9 ...
*/