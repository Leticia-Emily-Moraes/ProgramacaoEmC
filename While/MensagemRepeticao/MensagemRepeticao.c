#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int cont=1;
	while(cont<=25)
	{
		printf("Eu AMO estudar l�gica de programa��o \n");
		cont++;
	}
	system("pause");
}
