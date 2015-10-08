#include <stdlib.h>
#include <stdio.h>

int main()
{
	int x;
	int i=1;
	int *pointer;
	int array[x];
	pointer=array;
	printf("ingresa el tamaño de tu arreglo\n");
	scanf("%d", &x);
	
	for(i=0; i<x; i++)
				pointer[i]= i+1;
				i++;
	for(i=0; i<x; i++)
			printf("%d,",pointer[i]);		
	
		
		
			
	
	return 0;
}
