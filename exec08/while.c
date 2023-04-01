//Sortear 6 numeros da Mega Sena e mostra-los na tela

#include<stdlib.h>
#include<stdio.h>
#include<time.h>//para utilizar comando srand(time(NULL)));
int main(){
	
	int numSorteado;
	int cont;//meu contador
	
	srand(time(NULL));
	printf("6 Numeros sorteados para Mega Sena:\n");
	
	cont = 1;//inicializar o contatdor
	while(cont<=6){
		numSorteado= rand()%60+1;
		printf("%d |",numSorteado);
		cont++;//atualiza contador
	}
	
	
	printf("\n");
	
	system("pause");
	return 0;
}
