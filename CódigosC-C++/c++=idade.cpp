#include <cstdio>

int main()
{
float salario; 
int idade;

	printf("Digite a sua idade.\n");
scanf("%d", &idade);
if(idade >=18){
	printf("Voce e maior de idade.\n");
	}
	else{
	printf("voce nao e maior de idade.\n");
	}

	printf("Quanto voce ganha de salario?\n");
	scanf("%f", &salario);
	
	if(salario >=1250){
		printf("voce recebe mais de um salario minimo.\n");
	}
	else{
		printf("voce recebe menos de um salario minimo.\n");
	}
		
	

	
}
