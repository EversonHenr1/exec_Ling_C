/* informe o sexo por extenso */

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num1,num2,res=0;
	char op;

	printf("Escolha a operacao desejada : ");
	scanf("%c",&op);
	printf("Digite o primeiro numero (inteiro) : ");
	scanf("%d",&num1);
	printf("Digite o segundo numero(inteiro) : ");
	scanf("%d",&num2);
	
	switch(toupper(op)){
		
		case '+':
		res=num1+num2;
		printf("o resultado da soma de: %d + %d = %d",num1,num2,res);
		break;
		case '-':
		res=num1-num2;
		printf("o resultado da Subtracao de: %d - %d = %d",num1,num2,res);
		break;
		case'*':case'X':
		res=num1*num2;
		printf("o resultado da Multiplicacao de: %d X %d = %d",num1,num2,res);
		break;
		case'/':
		if(num2>0){
			res=num1/num2;
		printf("o resultado da Divisao de: %d / %d = %d",num1,num2,res);
		
		}else{
			printf("Numero invalido");
		}
		break;
		
		default:
		printf("Erro: Digite um simbolo correto");
		break;
		
	}
	
	
	
	
	


	printf("\n");
	system ("pause");
	return 0;
}

