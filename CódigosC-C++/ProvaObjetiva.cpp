#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu() {
		printf("Selecione uma opcao...\n");
		printf("1- CANAL DE CONTEUDOS DE FACULDADE.\n");
		printf("2- CANAL DE CONTEUDOS DE CURSOS PAGOS.\n");
		printf("3- CANAL DE CONTEUDOS DE CURSOS GRATIS.\n");
		printf("4- CANAL DE CONTEUDOS CULINARIOS.\n");
		printf("5- CANAL DE CONTEUDOS DE MUSICAS.\n");
		printf("6- SAIR.\n");
	}

	int ler_opcao() {
		int op;
		int valido = 0;
		
		while(valido == 0) {
			scanf("%d", &op);
		switch (op) {
			case 1:
				printf("Canal Unifael.\n");
				printf("Endereco: https://www.youtube.com/c/UNIFAEL\n");
				break;
			case 2:
				printf("Canal Alura.\n");
				printf("Endereco: https://www.youtube.com/c/Alura\n");
				break;
			case 3:
				printf("Canal Curso em video.\n");
				printf("https://www.youtube.com/results?search_query=curso+em+video\n");
				break;
			case 4:
				printf("Canal MasterChef Brasil.\n");
				printf("https://www.youtube.com/c/MasterChefBrasilOficial\n");
				break;
			case 5:
				printf("Canal Sertanejo.\n");
				printf("https://www.youtube.com/results?search_query=+canalSERTANEJO\n");
				break;
			case 6:
					return op;
					break;
			default:
				printf("Comando Invalido!!\n");
				menu();
				break;
		}
		
	}
}


	struct Youtube1 {
		char endereco[100];
		char canal[100];
		float inscritos;
		int quantVideos;
	};
	
	struct Youtube2 {
		char endereco[100];
		char canal[100];
		float inscritos;
		int quantVideos;
	};
	
	struct Youtube3 {
		char endereco[100];
		char canal[100];
		float inscritos;
		float quantVideos;
	};
	
	struct Youtube4 {
		char endereco[100];
		char canal[100];
		float inscritos;
		float quantVideos;
	};
	
	struct Youtube5 {
		char endereco[100];
		char canal[100];
		float inscritos;
		int quantVideos;
	};
	
	
	int main() {
	char videos1[] = {'W','o','r','k','s','h','o','p','-','G','e','s','t','a','o'};
	int op;
	
	struct Youtube1 video1;
	
	
	strcpy(video1.canal,"Unifael");
	strcpy(video1.endereco,"https://www.youtube.com/c/UNIFAEL");
	video1.quantVideos = 70;
	video1.inscritos = 41800;
	
	printf("Nome do Canal do Youtube: %s \n", video1.canal);
	printf("Endereco do canal: %s \n", video1.endereco);
	printf("Quantidade de inscritos do canal: %2.f\n", video1.inscritos);
	printf("Quantidade de videos do canal: %d\n", video1.quantVideos);
	printf("\n");
	//Primeira estrutura
	struct Youtube2 video2;
	
	strcpy(video2.canal,"Alura Cursos Online");
	strcpy(video2.endereco,"https://www.youtube.com/c/Alura");
	video2.quantVideos = 891;
	video2.inscritos = 267000;
	//Segunda estrutura
	printf("Nome do Canal do Youtube: %s \n", video2.canal);
	printf("Endereco do canal: %s \n", video2.endereco);
	printf("Quantidade de inscritos do canal: %2.f\n", video2.inscritos);
	printf("Quantidade de videos do canal: %d\n", video2.quantVideos);
	printf("\n");
	
	struct Youtube3 video3;
	
	strcpy(video3.canal,"Curso em Video");
	strcpy(video3.endereco,"https://www.youtube.com/results?search_query=curso+em+video");
	video3.quantVideos = 1077;
	video3.inscritos = 1750000;
	
	printf("Nome do Canal do Youtube: %s \n", video3.canal);
	printf("Endereco do canal: %s \n", video3.endereco);
	printf("Quantidade de inscritos do canal: %2.f\n", video3.inscritos);
	printf("Quantidade de videos do canal: %2.f\n", video3.quantVideos);
	printf("\n");
	//terceira estrutura
	struct Youtube4 video4;
	
	strcpy(video4.canal,"MasterChef Brasil");
	strcpy(video4.endereco,"https://www.youtube.com/c/MasterChefBrasilOficial");
	video4.quantVideos = 2180;
	video4.inscritos = 4550000;
	
	printf("Nome do Canal do Youtube: %s \n", video4.canal);
	printf("Endereco do canal: %s \n", video4.endereco);
	printf("Quantidade de inscritos do canal: %2.f\n", video4.inscritos);
	printf("Quantidade de videos do canal: %f\n", video4.quantVideos);
	printf("\n");
	//Quarta estrutura
	struct Youtube5 video5;
	
	strcpy(video5.canal,"Canal Sertanejo");
	strcpy(video5.endereco,"https://www.youtube.com/results?search_query=+canalSERTANEJO");
	video5.quantVideos = 52;
	video5.inscritos = 15300;
	
	printf("Nome do Canal do Youtube: %s \n", video5.canal);
	printf("Endereco do canal: %s \n", video5.endereco);
	printf("Quantidade de inscritos do canal: %2.f\n", video5.inscritos);
	printf("Quantidade de videos do canal: %d\n", video5.quantVideos);
	printf("\n");
	//Quinta estrutura
	system("pause");
	system("cls");
	
		menu();
		ler_opcao();
		
		return 0;
	}
