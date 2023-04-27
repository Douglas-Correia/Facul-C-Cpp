#include <stdio.h>
#include <stdlib.h>

int main(){

struct estudante {
	
	int matricula;
	char nome[80];
	float mensalidade;
	char dataBacharelado[30];
};
	struct estudante stud1, *ptr_stud1;
	
	ptr_stud1 = &stud1;
	printf("\n Entre com o numero de matricula: ");
	scanf("%d", &ptr_stud1->matricula);
	printf("\n Entre com o nome: ");
	scanf("%s", &ptr_stud1->nome);
	printf("\n Entre com valor da mensalidade: ");
	scanf("%f", &ptr_stud1->mensalidade);
	printf("\n Entre com a data de Bacharelado: ");
	scanf("%s", &ptr_stud1->dataBacharelado);
	
	system("cls");
	printf("\n********DADOS CADASTRAIS DO ESTUDANTE********\n");
	printf("\nNumero de Matricula: %d", ptr_stud1->matricula);
	printf("\nNome do estudante: %s", ptr_stud1->nome);
	printf("\nValor da mensalidade: %2.f", ptr_stud1->mensalidade);
	printf("\nData de inicio Bacharelado: %s", ptr_stud1->dataBacharelado);
	
	return 0;
	
	
}
