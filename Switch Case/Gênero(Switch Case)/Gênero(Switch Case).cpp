#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	char genero;
	
	printf("Selecione seu G�nero sendo que:\n F- Feminino\n M-Masculino\n O-Outros\n");
	scanf(" %c",&genero);
	
	switch(genero)
	{
		case 'F':
		case 'f':
		{
			printf("Ol� Mulher\n");
			break;
		}
		case 'M':
		case 'm':
		{
			printf("Ol� Homem\n");
			break;
		}
		case 'O':
		case 'o':
		{
			printf("Ol� Pessoa que n�o se idendifica com os g�neros convencionais\n");
			break;
		}
		default:
			printf("Op��o Invalida\n");
			break;
	}
	system("pause");
}
