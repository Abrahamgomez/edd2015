#include <iostream>
using namespace std;
float res[3][3];
float matriz1[3][3];
float matriz2[3][3];
int main()
{


	int i=0,j=0;
	//solicitamos valores de matrices
	cout<<"ingresa los datos de la primera matriz\n";
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cin>>matriz1[i][j];
		}
	}
	cout<<"ingresa los datos de la segunda matriz\n";
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cin>>matriz2[j][i];
		}
	}

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

    for(i=0; i<3; i++)
	{
			cout<<"[";
	for(j=0; j<3; j++)
		{
		cout<<matriz1[i][j];
		}
	if(i==1)
			cout<<"]  x  [";
		
	else
			cout<<"]     [";
			
	
	for(j=0; j<3; j++)
		{
			cout<< matriz2[i][j];
		}
	if(i==1)
			cout<<"]  =  [";
		
	else
			cout<<"]     [";
			
	
	for(j=0; j<3; j++)
		{
			cout<< res[i][j];
		}
		
			cout<<"]"<<endl;


    return 0;
}
}
