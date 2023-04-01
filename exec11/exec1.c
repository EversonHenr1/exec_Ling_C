/*Este programa para simular o funcionamento de um caixa eletronico */

/*
Operações : Deposito, Saque, Consultar saldo
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float saldo = 1000.0;
	float valor;//valor para operação como deposito, saque
	int opcao;
	
	//estrutura de repetição do_while
	do{
	
	printf("\n-=================\nMenu de opcao para transacao:\n");
	printf("1. Deposito \n");
	printf("2. Saldo \n");
	printf("3. Saque \n");
	printf("4. Sair \n");
	printf("\nEscolhe a sua opcao ? \n");
	scanf("%d",&opcao);
	while(opcao <1 || opcao >4){
		//consistencia de dados
		printf("\nOpcao invalida! Digite a opcao valida (1,2,3,4) :\nescolha uma opcao ?");
		scanf("%d",&opcao);
		
	}
	switch(opcao){
		
		case 1 :
			printf("Valor de deposito ?");
			scanf("%f",&valor);
			saldo += valor;//saldo = saldo+valor;
			printf("Seu saldo atual é: %.2f",saldo);
			break;
		case 2 :
			printf("Saldo atual = %.2f",saldo);
			break;
		case 3 :
			printf("Saldo atual = %.2f\n",saldo);
			printf("Qual é o valor do saque ?");
			scanf("%f",&valor);
			if(saldo<valor){
				printf("Saldo insuficiente! verifique seu saldo!");
				
			}else{
				saldo -= valor;//saldo = saldo+valor;
			}
			printf("Seu saldo atual é: %.2f",saldo);
			break;
		default:
			printf("Encerramento da transacao !");
			
			
			
	
				
					
	}
	}while (opcao!=4);
	
	printf("\nFim das tranasacao");
	printf("\n");
	system("pause");
	return 0;
}
