/*Crear una Matriz B de dimensiones n x n, ingresado por teclado y cargada 
automaticamente se desea saber
1. impresion de la matriz generada ****
2. impresion de los valores de la diagonal principal****
3. impresion de los valores de la diagonal secundaria y su promedio****
4. la sumatoria de todos los valores que se encuentran en filas impares***
5. la sumatoria de todos los valore que ocupan las columnas pares con su respectivo 
promedio
6. promedio general de la matriz
7. sumatoria de todos los elementos
8. ordenacion descendente de la matriz */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, f, c, aux,sds = 0,ctds= 0,pds,si=0,sp=0,cp=0;
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
				sds+=B[f][c]; //suma el elemento
				ctds++; //cuenta el elemento
				aux--;
			}else{
				printf("\t");
			}	
		}
		printf("\n");
	}
	pds= sds/ctds;//promedio de la diagonal secundaria P=S/C
	printf("Promedio de diagonal Secundaria: %d\n", pds);


	//IMPRIMIR SUMATORIA DE TODOS LOS VALORES DE LAS FILAS IMPARES
	printf("\n..::SUMATORIA de FILAS IMPARES::..\n");//DECOR PRINT
	for ( f = 0; f < n; ++f)
	{
		for ( c = 0; c < n; ++c)
		{
			if( f % 2 == 1)
			{
				si+=B[f][c];
			}
		}
	}
	printf("Sumatoria de Filas Impares es: %d\n", si);

	//IMPRIMIR SUMATORIA DE TODOS LOS VALORES DE LAS COLUMNAS PARES Y SU PROM.
	printf("\n..::SUMATORIA de COLUMNAS PARES::..\n");//DECOR PRINT
	for ( f = 0; f < n; ++f)
	{
		for ( c = 0; c < n; ++c)
		{
			if( c % 2 == 0)
			{
				sp+=B[f][c];
				cp++;
			}
		}
	}
	printf("Sumatoria de Columnas Pares es: %d\n", sp);
	printf("El promedio de valores de las columnas pares es: %d\n", sp/cp);


	printf("\n");
	return 0;
}