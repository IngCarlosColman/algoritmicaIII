/*Crear una Matriz B de dimensiones n x n, ingresado por teclado y cargada 
automaticamente se desea saber
1. impresion de la matriz generada ****
2. impresion de los valores de la diagonal principal****
3. impresion de los valores de la diagonal secundaria y su promedio****
4. la sumatoria de todos los valores que se encuentran en filas impares
5. la sumatoria de todos los valore que ocpua las columnas pares con su respectivo 
promedio
6. promedio general de la matriz
7. sumatoria de todos los elementos
8. ordenacion descendente de la matriz */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, f, c, aux;
	system("clear");
	
	printf("Favor Ingrese Dimension de la Matriz Cuadrada: ");
	scanf( "%i", &n);
	
	int B[n][n];
	
	printf("..::MATRIZ GENERADA::..\n");//DECOR PRINT
	for ( f = 0; f < n; ++f)
	{
		for ( c = 0; c < n; ++c)
		{
				B[f][c]=rand()%100+1;
				printf("%d | ", B[f][c]); //number 1 is over
		}
		printf("\n");
	}

	//IMPRIMIR VALORES DE LA DIAGONAL PRINCIPAL
	printf("\n..::DIAGONAL PRINCIPAL::..\n");//DECOR PRINT
	for ( f = 0; f < n; ++f)
	{
		for ( c = 0; c < n; ++c)
		{
			if(f == c)
			{
				printf("%d | ", B[f][c]); //number 2 is over
			}else{
				printf("\t");
			}	
		}
		printf("\n");
	}

	//IMPRIMIR VALORES DE LA DIAGONAL SECUNDARIA
	printf("\n..::DIAGONAL SECUNDARIA::..\n");//DECOR PRINT
	aux = n-1;
	for ( f = 0; f < n; ++f)
	{
		for ( c = 0; c < n; ++c)
		{
			if(c == aux)
			{
				printf("%d | ", B[f][c]); //number 2 is over
				aux--;
			}else{
				printf("\t");
			}	
		}
		printf("\n");
	}



	printf("\n");
	return 0;
}