// ORDENAMIENTO BURBUJA
#include <cstdio.h>
#include <cstdlib.h>
#include <iostream>
#include <ctime.h>

void generar (int *list, int n){
	for (int i =0; i<n; i++)  list[i] =rand () %1000 +1;
}

void imprimir (int *list, int n){
	for (int i =0; i<n; i++){

	printf(" %6i ", list[i]);


}
printf("\n");
}

void swap(int &a, int &b){
	int comosea= a;
	a = b;
	b= comosea;
}

long cont;

void bsort(int *list, int n){

    int j = 1;

    while (j <= n){

    cont++;

    int i = 0;

    while(i <= n-j-1){

    if (list[i] > list [i+1])
    swap list[i], list[i+1]);

    i++,
   }
    j++;
  }
}

int main (){
	int x;
	srand (time(NULL));

		int list[100];

		generar(list,100);
		imprimir(list,100);

		cont = 0;
		bsort(list,100);
		imprimir(list,100);
		std::cout<<std::endl<<cout<<std::endl;
	return 0;
}





