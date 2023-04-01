/*Faça um programa em c que recebem as idades dos pacientes de uma clínica e a
quantidade de paciente. O programa vai achar a idade daquele mais idoso.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int cont,quantidade;
	int maior , idade;
	
	
	printf("Digite a quantidade de pacientes desta clinica : n = ");
	scanf("%d",&quantidade);
	
	cont = 1;maior = 0;
	
	while(cont <= quantidade){
		
		printf("Digite a idade do paciente %d : ",cont);
		scanf("%d",&idade);
		
		
		if(maior == 0){
			maior = idade;
			
		}
		if(idade>maior){
			
			maior = idade;
			
		}
		
		cont++;
		
	}
	printf("A Maior idade e : %d",maior);
	
	
		
	system("pause");
	return 0;
}

