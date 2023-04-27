#include <stdio.h>
#include <conio.h>

main(void)
{
	float nota[4], media;
	int i;
	char aluno[30];
	
	printf("Qual o nome do aluno? ");
	scanf("%s", &aluno);
	for (i = 0; i < 4; i++)
	{
		printf("\nDigite a nota %d: ", i + 1);
		scanf("%f", &nota[i]);
	}
	media = (nota[0] + nota[1] + nota[2] + nota[3]) / 4;
	if (media >= 6)
	{
		printf("O aluno %s", &aluno);
		printf(" esta aprovado");
	} 
	else if (media > 4.5 < 6)
	{
		printf("\nO aluno %s", &aluno);
		printf(" esta de recuperacao");
	}
	else 
	{
		printf("\nO aluno %s", &aluno);
		printf(" esta reprovado");
	}
	
	return 0;
}
