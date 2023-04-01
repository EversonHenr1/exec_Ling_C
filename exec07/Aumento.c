#include<stdio.h>
#include<stdlib.h>

int main(){
	
	char nome_fun[50];//é uma estrutura vetor(array) com (50 variaveis)
	float sal_atual,sal_atualizado;
	
	
	/*//1) usando comando gets(...), o comando gets não será aceito pelo C padrão!!!
	printf("Informe seu nome: ");
	gets(nome_fun); // pegar o nome digitado por usuario  e armazena no vetor nome_fun[50]
	printf("seu nome e: %s\n",nome_fun);*/
	
	//2) usando o comando scanf(..)
	
	/*printf("Informe seu nome: ");
	scanf("%s",nome_fun);
	printf("seu nome e: %s\n",nome_fun);*/
	
	//3) usando fgets(....) (recomendado)
	
	printf("Informe seu nome: ");
	fgets(nome_fun,sizeof(nome_fun),stdin);
	printf("Informe seu salario atualR$ ");
	scanf("%f",&sal_atual);
	
	if(sal_atual <= 2500){
		sal_atualizado = sal_atual + sal_atual*21.45/100;
	}
	if(sal_atual>2500 && sal_atual < 5500){
		sal_atualizado = sal_atual+sal_atual*13.55/100;
	}
	if(sal_atual>= 5500){
		sal_atualizado = sal_atual+sal_atual*10.50/100;
	}
	

	
	printf("Seu nome e : %s\n",nome_fun);
	printf("e seu salario atualizado e R$ %.2f",sal_atualizado);
	
	system("pause");
	return 0;
}
