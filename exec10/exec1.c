/*Faça um programa em C que recebem as notas dos alunos de uma turma e a
quantidade de alunos desta turma. O programa vai calcular a média da turma.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int cont,quantidade;
	float nota,media;
	float soma;//Acumulador
	
	printf("Informe a quantidade de alunos desta sala: n= ");
	scanf("%d",&quantidade);
	

	
	//usamos a estrutura de repetição while ou for
	
	cont = 1;soma = 0;
	while(cont <= quantidade){
		
		printf("Digite a nota do %d o aluno: nota = ",cont);
		scanf("%f",&nota);
		soma +=nota; // soma = soma+nota
		cont++;//atualiza contador!!!
	}
	media = soma/quantidade;
	printf("A media desta turma ficou para:media = %.2f\n",media);
	
	
	
	
	
	
	
	
	
	
	
	printf("\n");
	system("pause");
	return 0;
}
