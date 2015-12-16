# ifndef _co
# define _co

typedef struct snode{
	int data;
	snode *next;

}node;

typedef struct{

	node *ini;
	node *back;
	int capital;

}queue;

void vacia (queue &co);
bool empt(queue &);
void inicio(queue &);
node *nodenuevo(int);
void add(queue &, int);
void dequeue(queue &);

# endif
