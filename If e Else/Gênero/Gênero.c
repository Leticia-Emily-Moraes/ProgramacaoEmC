#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	char genero;
	
	printf("Ol�! Diga-me seu g�nero.\n F-Feminino\n M-Masculino\n O-Outros\n");
	scanf(" %c", &genero);
	
	if (genero == 'F' || genero == 'f') 
	{
		printf ("Ol� mo�a  \3\n");
	}
	else if (genero == 'M' || genero == 'm') 
	{
		printf ("Ol� mo�o  \3\n");
	}
	else 
	{
		printf ("Ol� \3\n");
	}

	system("pause");
}
