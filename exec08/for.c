//Sortear 6 numeros da Mega Sena e mostra-los na tela

#include<stdlib.h>
#include<stdio.h>
#include<time.h>//para utilizar comando srand(time(NULL)));
int main(){
	
	int numSorteado;
	int cont;//meu contador
	int n;//quantidade de numeros
	int continua = 1;
	char opcao;
	/*em  linguagem C, para uma condição
	se o valor de uma condição for 1, essa condição é verdadeira
	em outros casos(qualquer valor diferente de 1)essa condição e falsa*/
	
while(continua){
	printf("Informe a quantidade de numeros a serem sorteado para Mega Sena n =");
	scanf("%d",&n);
	
	printf("%d numeros de mega Sena sorteados !\n",n);
	
	
	srand(time(NULL));

	
	for(cont = 1; cont<= n; cont++){
		
		numSorteado= rand()%60+1;
		printf("%d |",numSorteado);
	}
	printf("\nDeseja continuar? (s/n) : ");
	fflush(stdin);
	scanf("%c",&opcao);
	
	
	if(opcao !='s' && opcao != toupper('s')){
		continua = 0;
	}
}	
	
		
		

	
	
	printf("\n");
	system("pause");
	return 0;
}
