#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "queue.h"

using namespace std;

void inicio(queue &co)
{
	co.ini=NULL;
	co.back=NULL;
	co.capital = 0;
}

bool empt(queue &co)
{
	if(co.capital == 0) return true;
	else  return false;
}

node *nodenuevo(int a){
	node *p = new node;
	p->data=a;
	p->next=NULL;
	return p;
}

void add(queue &co, int a){


	node *p = nodenuevo(a);
	if(co.ini == NULL) co.ini = p ;
	else
		(co.back)->next = p;

	co.back = p;
	co.capital++;
}

void vacia (queue &co)
{
	node *aux;

	while(co.ini != NULL)
	{
		aux = co.ini;
		co.ini = aux->next;
		delete(aux);
	}
	co.ini = NULL;
	co.back  = NULL;
	co.capital =0;
}

void dequeue(queue &co)
{
	if(empt(co))
	{
		cout<<"No hay datos"<<endl;
	}
	else{
		node *p;
		p=co.ini;
		co.ini=p->next;
		cout<<p->data;
		delete p;
		co.capital--;
	}
}


