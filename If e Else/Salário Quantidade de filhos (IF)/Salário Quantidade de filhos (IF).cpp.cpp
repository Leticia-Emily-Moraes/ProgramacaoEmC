/* informar o sal�rio */ 
/* informar a quantidade de filhos */
/* se tiver filho *100 */
/* se n�o tiver "sem aux�lio */


#include <stdio.h>
#include <stdlib.h>

int main () {
	float sal,filho,calculo;
	printf("Digite seu salario; \n");
	scanf("%f", &sal);
	printf("Digite qual a quantidade de filhos.(Se n�o tiver filhos coloque '0' )");
	scanf("%f", &filho);
	
	calculo = filho * 100+ sal;
	
	if(filho>=1){
		printf(" total do salario: %f\n", calculo);
	}else {
		printf("Sem direito ao auxilio");
	}
	system("pause");

}
