#include<stdio.h>
#include<stdlib.h>
int main(){
	
	
	float altura,peso,imc=0;

	
	printf("Digite sua altura: cm ");
	scanf("%f",&altura);
	printf("Digite seu peso: kg ");
	scanf("%f",&peso);
	//printf("Sr %s , seu peso e %f e sua altura e %f",nome,peso,altura);
	imc=peso/(altura*altura);
	printf("seu imc e %f \n",imc);
	
	if(imc<18.5){
		printf("Abaixo do peso normal");
	}
	if(imc >= 18.5 && imc <= 24.9){
		printf("Peso normal");
	}
	if(imc >= 25.0 && imc <= 29.9){
		printf("Excesso de peso");
	}			
	if(imc >= 30.0 && imc <= 34.9){
		printf("Obesidade classe1");
	}
	if(imc >= 35.0 && imc <=39.9){
		printf("Obesidade classe2");
	}
	if(imc >= 40.0){
		printf("Obesidade Classe3");
	}else{
		printf("Erro");
	}
			
	
		
		/*else{
			if(imc=>25.0 && imc <= 29.9){
				printf("Excesso de peso");
			}else{
				if(imc =>30.0 && imc <= 34.9){
					prinf("Obesidade classe1");
				}
				else{
					if(imc => 35.0 && imc <=39.9){
						printf("Obesidade classe2");
					}else{
						printf("Obesidade classe3");
					}
				}
			}
		}*/
		
	
	
	printf("\n");
	
	system("pause");
	return 0;
}
