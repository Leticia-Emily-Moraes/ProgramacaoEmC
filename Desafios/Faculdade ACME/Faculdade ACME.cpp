#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	char nome[100];
	int curso, adm=800, ads=1300, enfer=850, dire=900, desc=0,desconto, precofinal, porcentagemfinal, precofinal5dia,pre, porcentagem5dia;
	char beneficios,repetir;
	
	printf("Ol�, somos a faculdade ACME estamos aqui para fazer seu cadastro para nossa faculdade \3\3\3\n");
	printf("Para come�armos insira seu nome completo:\n");
	gets (nome);
	system ("cls");
	//pedindo para colocar o nome e guardando na variavel nome
	
	printf("�timo agora escolha um numero de acordo com curso desejado:\n1-Administra��o:R$800.00\n2-An�lise de Sistemas:R$1300.00\n3-Enfermagem:R$850.00\n4-Direito:R$900.00\n");
	scanf("%d", &curso);
	//pedindo para o candidato escolher o curso
	system ("cls");
	printf(" Descontos s�o aplicados nas seguintes condi��es:\n1-Se voc� � servidor p�blico? \n2-Se voc� � Aluno oriundo de escola p�blica? \n3-Se voc� j� tem uma gradua��o?\nCaso queira mais 5%% de desconto pague antes do 5� dia �til do m�s\n");
	printf(" Voc� se aplica em uma dessas condi��es? (S/N)\n");
	scanf(" %c",&beneficios);
	system ("cls");
	if(beneficios=='s')
	{
		do 
		{
			system ("cls");
			printf("Selecione um numero de acordo com a condi��o voc� se aplica:\n1-Se voc� � servidor p�blico? \n2-Se voc� � Aluno oriundo de escola p�blica? \n3-Se voc� j� tem uma gradua��o?\n");
			scanf("%d", &desconto);
			if(desconto==1)
			{
				desc=desc+5;
			}
			else if(desconto==2)
			{
				desc=desc+10;
			}
			else if(desconto==3)
			{
				desc=desc+10;
			}
			else
			{
				printf("Op��o inv�lida\n");
			}
			printf(" Gostaria de selecionar mais uma condi��o? (S/N)\n");
			scanf(" %c", &repetir);
			system ("cls");
		}
		while(repetir=='s');
	}
	//Tabela mostrando as informa�oes selecionadas
	printf("nome do candidato: %s\n", nome);
	//mostrando o nome do candidato
	if (curso == 1)
	{
		printf(" Curso escolhido: Administra��o \n");
		printf(" Valor cheio: R$800,00 \n");
	} 
	else if (curso == 2)
	{
		printf(" Curso escolhido: An�lise de sistemas \n");
		printf(" Valor cheio: R$1300,00 \n");
	} 
	else if (curso == 3)
	{
		printf(" Curso escolhido: Enfermagem \n");
		printf(" Valor cheio: R$850,00 \n");
	}
	else if  (curso == 4)
	{
		printf(" Curso escolhido: Direito \n");
		printf(" Valor cheio: R$900,00 \n");
	}
	else 
	{
		printf("Voc� � um idiota e n�o escolheu um curso v�lido, parab�ns voc� n�o far� uma faculdade \3\3 \n");
	}
	//Estrutura decis�o: Mostra o curso e o valor do curso conforme escolhido
	printf(" Total do desconto:%%%d\n", desc);
	//mostrando o desconto depois de responder o questionario
	if (curso == 1)
	{
		porcentagemfinal= adm * desc/100;
		precofinal=adm-porcentagemfinal;
		printf(" Valor da mensalidade depois do desconto:R$%d,00\n", precofinal);
	} 
	else if (curso == 2)
	{
		porcentagemfinal= ads * desc/100;
		precofinal=ads-porcentagemfinal;
		printf(" Valor da mensalidade depois do desconto:R$%d,00\n", precofinal);
	} 
	else if (curso == 3)
	{
		porcentagemfinal= enfer * desc/100;
		precofinal=enfer-porcentagemfinal;
		printf(" Valor da mensalidade depois do desconto:R$%d,00\n", precofinal);
	}
	else if  (curso == 4)
	{
		porcentagemfinal= dire * desc/100;
		precofinal=dire-porcentagemfinal;
		printf(" Valor da mensalidade depois do desconto:R$%d,00\n", precofinal);
	}
	else 
	{
		printf(" Voc� � um idiota e n�o escolheu um curso v�lido, parab�ns voc� n�o far� uma faculdade \3\3 \n");
	}
	porcentagem5dia=precofinal * 5/100;
	precofinal5dia=precofinal-porcentagem5dia;
	printf(" Caso Voc� pague antes do 5� dia �til o valor pago ser� de: R$%d,00\n",precofinal5dia );
	
	system("pause");
	
}
