/*
Um exemplo para procedimento
*/

#include <stdio.h>
#include <stdlib.h>
//declara��o de subprograma (prot�tipo)
void mensagem(char name[]);


//programa principal
int main(){
	char nome[30];
	printf("Informe seu nome: ");// pagar nome digitado por usu�rio
	fgets(nome,sizeof(nome),stdin);
	
	
	
	
	
	mensagem(nome); //chamando um subprograma mensagem();
	printf("\n");
	system("pause");
	return 0;
}

//subprograma: procedimento
void mensagem(char name[]){
	printf("Seja bem Vindo a linguagem C ! %s",name);
}
