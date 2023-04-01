/* Input 2 Numeros, Somar*/
//incluir biblioteca necessario 
#include<stdio.h>

int main() {
	//codigos em C
	
	//1) Declaração das variaveis
	
	int num1,num2;//variaveis para entrada de dados
	int resul_soma;//variaveis para saida de dados
	
	//2) comandos (os passos)
	// scanf("%d%d",&num1,&num2), Na mesma linha
	//receber os dados digitados por usúario e armazenar nas variaveis num1 e num2
	//%d - conversão de dados para int(inteiro),& - operador de endereço
	printf("Informe o 1 Numero Inteiro: \n");
	scanf("%d",&num1);
	printf("Informe o 2 Numero Inteiro: \n");
	scanf("%d",&num2);
	
	//3)operação ou processamento
	//"=" significa : receber ou atribuir , "+" operador da soma
	
	resul_soma = num1 +num2;
	//4)mostrar o resultado
	
	printf("O resultado da Soma %d + %d= %d\n",num1 , num2,resul_soma);
	
	
	return 0;
}
