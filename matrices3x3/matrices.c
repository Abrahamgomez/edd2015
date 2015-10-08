#include <stdlib.h>
#include <stdio.h>
float matriz1[3][3];
float matriz2[3][3];
float res[3][3];

int main()
{
	
	int i=0,j=0;
	//solicitamos valores de matrices
	printf("ingresa los datos de la primera matriz\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%f", &matriz1[i][j]);
		}
	}
	printf("ingresa los datos de la segunda matriz\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%f", &matriz2[j][i]);
		}
	}
	//multiplicacion de la matriz1 y matriz2

		int fil, col, aux; 
				
	for(fil=0; fil<3; fil++)
	{
		for(col= 0; col<3; col++)
		{
			for(aux=0; aux<3; aux++)
			{
				res[fil][col]= res[fil][col] + (matriz1[aux][col] * matriz2[fil][aux]);
			
			}
				
		}
	
	}
	
	
	//mostrando resultado
for(i=0; i<3; i++)
	{
			printf("[");
	for(j=0; j<3; j++)
		{
		printf("%.2f ", matriz1[i][j]);
		}
	if(i==1)
			printf("]  x  [");
		
	else
			printf("]     [");
			
	
	for(j=0; j<3; j++)
		{
			printf("%.2f ", matriz2[i][j]);
		}
	if(i==1)
			printf("]  =  [");
		
	else
			printf("]     [");
			
	
	for(j=0; j<3; j++)
		{
			printf("%.2f ", res[i][j]);
		}
		
			printf("]\n");
		
			
	
	}
	
	
		
	return 0;
}
	

