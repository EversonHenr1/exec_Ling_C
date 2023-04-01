#include<stdlib.h>
#include<stdio.h>
int main(){
	
	int num1,num2,cont=0,resultado=1;
	
	printf("Digite seu primeiro numero : ");
	scanf("%d",&num1);
	printf("Digite a potencia desejada : ");
	scanf("%d",&num2);
	
	while(cont<num2){
		
		resultado=num1*resultado;
		
		cont++;
		
	}
	printf("%d",resultado);
	
	
	
	system("pause");
	return 0;
}
