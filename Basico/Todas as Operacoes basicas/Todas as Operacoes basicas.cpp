#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	int n1,n2,soma,sub,mult,div;
	
	printf("Insira um n�mero: ");
	scanf ("%d", &n1);
	
	printf("Insira outro n�mero: ");
	scanf("%d" , &n2);
	
	soma=n1+n2;
	sub=n1-n2;
	mult=n1*n2;
	div=n1/n2;
	
	printf("Soma: %d \n", soma);
	printf("Subtra��o: %d \n", sub);
	printf("Multiplica��o: %d \n", mult);
	printf("Divis�o: %d \n", div);
	
    system("pause");	
}
