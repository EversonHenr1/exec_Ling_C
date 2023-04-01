#include<stdlib.h>
#include<stdio.h>

int main(){
	
	int alunos,cont=1;
	float nota,media=0;
	
	printf("Digite a quantidade de Alunos: ");
	scanf("%d",&alunos);
	
	while(cont<=alunos){
		
		printf("\nDigite a Nota do Aluno %d : ",cont);
		scanf("%f",&nota);
		printf("A nota do Aluno %d e : %.2f\n",cont,nota);
		media=nota+media;
		cont++;
	}
	cont=cont-1;
	media = media/cont;
	printf("\nA Media da Sala e: %.2f",media);
	
	printf("\n");
	system("pause");
	return 0;
}

