#include <stdio.h>
#include <conio.h>

main(void)
{
	float nota[4];
	int i;
	printf("Informe as notas: ");
	for (i = 0; i < 4; i++)
	{
		printf("\nNota %d: ", i + 1);
		scanf("%f", &nota[i]);
	}
	printf("As notas foram:");
	for (i = 0; i < 4; i++)
	{
		printf("\nNota %d: %f", i + 1, nota[i]);
	}
	_getch();
}
