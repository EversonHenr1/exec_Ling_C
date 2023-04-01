#include<stdio.h>
#include<stdlib.h>
#include<time.h>// para comando srand(time(Null) = semente para gerar um numero aleatorio

int main(){
	
	srand(time(NULL));
	int num1,num2;
	
	num1 = rand()%13 +2; // rand()%13 - Gera um Numero inteiro de 0 a 12 // +2 Deixa de 2 a 14 
	num2 = rand()%13 +2;
	
	printf("Jogafor A recebe um :%d \n",num1);
	printf("Jogafor B recebe um :%d \n",num2);
	
	if(num1>num2){
		printf("Jogador A ganhou 10 reais !\n");
	}
	if(num1<num2){
		printf("Jogador B ganhou 10 reais !\n");
	}
	if(num1==num2){
		printf("Nenhum dos dois jogadores Ganhou :(\n");
	}
		
	
	
	
	system("pause");
	return 0;
}
