/*
Um exemplo para procedimento
*/

#include <stdio.h>
#include <stdlib.h>
//declara��o de subprograma (prot�tipo)
void mensagem();


//programa principal
int main(){
	
	
	
	mensagem(); //chamando um subprograma mensagem();
	printf("\n");
	system("pause");
	return 0;
}

//subprograma: procedimento
void mensagem(){
	printf("Seja bem Vindo a linguagem C !");
}
