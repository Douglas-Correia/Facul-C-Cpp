#include <stdio.h>
#include <stdlib.h>

int main(void){
	float nota[] = new float[4];
	float media; 
	int i, contador;
	
	for(int contador = 0; contador < nota; contador++){
		printf("Digite a nota do aluno: ");
		scanf("%f", nota[contador]);
	}
}
