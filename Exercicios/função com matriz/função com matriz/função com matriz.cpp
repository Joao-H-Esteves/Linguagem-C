// fazer uma função para chamar uma matriz
//

#include <iostream>
												// {1 , 2, 3}
int main()										// {4 , 5, 6}
{												// {7 , 8, 9}
	void funcaoPrint(int x[3][3]);
	int matriz[3][3] = { 1,2,3,4,5,6,7,8,9, };
	

	/* Ao invez de declarar a matriz aqui, vamos executa-la em uma função void.
	* 
	for ( i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf(" %d\t", matriz[i][j]);
		}
		printf("\n");
	}
	*/
	funcaoPrint(matriz);

	system("pause");

	return 666;
}

void funcaoPrint(int x[3][3]) { // como é matriz deve ser declarado o tamanho real dela.

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf(" %d\t", x[i][j]);
		}
		printf("\n");
	}

}