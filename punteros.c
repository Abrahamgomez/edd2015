#include <stdlib.h>
#include <stdio.h>

int main()
{
	int x;
	int l;
	int i=1;
	int *pointer;
	//int array[x];
	//pointer=array;
	printf("ingresa el tamaño de tu arreglo\n");
	scanf("%d", &x);
	//reserva el tamaño e bytes malloc
	pointer=(int*)malloc (x*sizeof(int));
	if(pointer==NULL){
			perror("falla");
}
else
{
	
	for(i=0; i<x; i++)
			pointer[i]= l; 
			l=i+1;
			
	for(i=0; i<x; i++)
			printf("%d-\n",pointer[i]);
	
		
		free(pointer);
			
	}
	return 0;
}
