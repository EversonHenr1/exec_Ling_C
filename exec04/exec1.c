//incluir uma biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>//Biblioteca para setlocale(LC_ALL,"Portuguese");



int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float exec,disct,provao;
	float result;	
	
	printf("Digite a nota dos Exerciocios(20%) : \n");
	scanf("%f",&exec);

	printf("Digite a nota da Prova Dissertativa(30%) : \n");
	scanf("%f",&disct);
	
	printf("Digite a nota do Provão(50%) : \n");
	scanf("%f",&provao);
	
	result = ((exec*20)+(disct*30)+(provao*50))/100;
	
	printf("Sua Nota Final Será = %.2f \n",result);
	
	system("pause");
	return 0;
	
}

