#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct x 
{
	char ch;
	struct x *prox;
};
struct x *ed;
void insere(char);

void insere(char letra)
{
	struct x *novo = (struct x*) malloc(sizeof(struct x));
	novo->ch = letra;
	novo->prox = ed;
	ed = novo;
}

main()
{
	insere();
}
