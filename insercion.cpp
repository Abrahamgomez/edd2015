#include<iostream>
using namespace std; 
int a[5]={4,1,7,2,6}; 
int n=8; 
int i,j,aux; 
int main(){ 
clrscr(); 
for(i=1;i<n;i++) 
{ 
j=i; 
aux=a; 
while(j>0 && aux<a[j-1]) 
{ 
a[j]=a[j-1]; 
j--; 
} 
a[j]=aux; 
} 
for(i=0;i<5;i++) 
{ 
cout<<a<<endl; 
} 
getchar(); 
} 
