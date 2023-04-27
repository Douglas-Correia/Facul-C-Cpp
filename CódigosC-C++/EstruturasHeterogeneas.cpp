#include <stdio.h>
#include <conio.h>

void ficha_aluno();
main(void)
{
	ficha_aluno();
	_getch();
}

void ficha_aluno()
{
	struct aluno
	{
		int matricula;
		char nome[50];
		char telefone[20];	
	};
	
	struct aluno a;
	
	printf("Informe os dados: \n");
	printf("Matricula: ");
	scanf("%d", &a.matricula);
	printf("Nome: ");
	scanf("%s", &a.nome);
	printf("Telefone: ");
	scanf("%s", &a.telefone);
	
	printf("Os dados cadastrados foram: \n");
	printf("Matricula: %d \n", a.matricula);
	printf("Nome: %s \n", a.nome);
	printf("Telefone: %s \n", a.telefone);
	
}
