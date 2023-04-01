#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
	
	
	
	float salario,aumento;
	float salario_Final;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite seu Salario Atual : \nR$ ");
	scanf("%f",&salario);
	
	aumento = salario*0.125;
	salario_Final = salario+aumento;
	
	printf("Seu salario Anterior era R$ %.2f\n\nMas com o aumento de R$ %.2f (12,5%%)\n\nserá R$ %.2f \n",salario,aumento,salario_Final);
	
	
	
	
	system("pause");
	return 0;
}
