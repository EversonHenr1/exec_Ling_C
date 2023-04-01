/*
um exemplo para função
*/
#include <stdio.h>
#include <stdlib.h>
float cal_media(float num1,float num2);
//declaração de subprogram(protótipo)

//programa principal

int main(){
	
	float nota1, nota2;
	
	printf("Informe a nota 1 : ");
	scanf("%f",&nota1);
	printf("Informa a nota 2 : ");
	scanf("%f",&nota2);
	printf("A media da sua nota = %.2f\n",cal_media(nota1,nota2));
	
	
	
	printf("\n");
	system("pause");
	return 0;
}

//subprogrma

float cal_media(float num1,float num2){
	float med;
	med = (num1 + num2)/2;
	return med;//devolvendo um valor
	
}

