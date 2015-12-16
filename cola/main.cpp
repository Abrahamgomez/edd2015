#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <ctime>
#include "queue.h"

int main()
{
	int x,c=0;
	char a;
	queue co1, co2;

	srand(time(NULL));

	inicio(co1);
	inicio(co2);

	std::cout<<"Buen dia"<<std::endl;

	std::cout<<" inserccion (i) \n operacion (o) \n solicitudes existentes (e) \n salida(x)"<<std::endl;
	do{
		std::cout<<"> ";
		std::cin>>a;

		switch (a)
		{
		case 'i':
			{
				int a;
				a = rand() %5 + 1;
				c=c+a;
				std::cout<<a<<" solicitudes nuevas: ";

				do
					{
						x = rand() % 99999 + 10000;
						int b = x % 7;
						if(b != 0 )
						{
							std::cout<<x<<" ";
							add(co1, x);
						}
						else
							{
								std::cout<<x<<"* ";
								add(co2, x);

							}
						a--;
					}while(a > 0);
				std::cout<<std::endl<<": "<<c;
				std::cout<<std::endl;
				break;
			}


		case 'o':

			if(empt(co1) == true && empt(co2) == true)
			{
				std::cout<<"No hay solicitudes"<<std::endl;
			}

			else
				{
					if(empt(co2)==false)
					{
						std::cout<<"solicitud prioritaria ";
						dequeue(co2);
						std::cout<<"* solicitud de prioridad atendida"<<std::endl;
					}
					else
						{
							std::cout<<"solicitud normal ";
							dequeue(co1);
							std::cout<<"solicitud atendida"<<std::endl;
						}
					c--;
				}

			break;

		case 'e':
			if(empt(co1) == true && empt(co2) == true)
			{
				std::cout<<"No hay solicitudes por atender"<<std::endl;

			}
			else
				{
					std::cout<<"hay solicitudes pendientes"<<std::endl;
				}

			break;

		case 'x':

			vacia(co1);
			vacia(co2);

			std::cout<<"adios"<<std::endl;
			break;

		default:
			std::cout<<"ingrese una de las letras correctas"<<std::endl;
			break;
		}

	}while(a != 'x');
}
