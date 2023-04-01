/* Input 2 Numeros sem ser decimais, Somar*/
//incluir biblioteca necessario 
#include<stdio.h>
#include<stdlib.h>
int main() {
	//codigos em C
	
	//1) Declaração das variaveis
	
	float num1,num2;//variaveis para entrada de dados
	float resul_soma;//variaveis para saida de dados
	
	//2) comandos (os passos)
	// scanf("%d%d",&num1,&num2), Na mesma linha
	//receber os dados digitados por usúario e armazenar nas variaveis num1 e num2
	//%d - conversão de dados para int(inteiro),& - operador de endereço
	printf("Informe o 1 Numero: \n");
	scanf("%f",&num1);
	printf("Informe o 2 Numero: \n");
	scanf("%f",&num2);
	
	//3)operação ou processamento
	//"=" significa : receber ou atribuir , "+" operador da soma
	
	resul_soma = num1 +num2;
	//4)mostrar o resultado
	
	printf("O resultado da Soma %.2f + %.2f= %.2f\n",num1 , num2,resul_soma);
	
	
	system("pause");
	return 0;
}
