#include <iostream>
#include <cstdlib>

using namespace std;

int Ackr(int n, int m)
{
if(n==0)
return m+1;
else
{
	if (m==0)
		return Ackr(n-1, 1);
	else
		return Ackr(n-1, Ackr(n, m-1));
	
}	
}

int main(){

int n;
int m;
int numero;

cout<<"ingrese el numero n"<<endl;
cin>>n;
cout<<"ingresa el numero m"<<endl;
cin>>m;

numero = Ackr(n,m);

cout<<"el numero es:"<<numero<<endl;

system("pause");

return 0;
}
