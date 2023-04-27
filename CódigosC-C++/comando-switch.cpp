#include <cstdio>

int main() {
	
	int num; 
	
printf("Digite um numero de 1 a 7.\n");
scanf("%d", &num);

	switch(num) {
			case 1: 
		printf("Domingo");
		break;
	case 2: 
		printf("Segunda-Feira");
		break;
	case 3: 
		printf("Terca-Feira");
		break;
	case 4: 
		printf("Quarta-Feira");
		break;
	case 5: 
		printf("Quinta-Fereira");
		break;
	case 6:
		printf("Sexta-Feira");
		break;
	case 7:
		printf("Sabado");
		break;
		
	default: 
		printf("Erro de numeracao!!.\n");
	}
	
	
}
