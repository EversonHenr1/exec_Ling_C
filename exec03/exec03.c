#include<stdio.h>
#include<stdlib.h>

int main(){
    float num1, num2, num3, res;
    printf("sua nota provao (50):");
    scanf("%f",&num1);
    printf("exercicios (20):");
    scanf("%f",&num2);
    printf("prova dissertativa (30):");
    scanf("%f",&num3);

    res = ((num1*50)+(num2*20)+(num3*30))/100;

    printf("o resultado e: %f\n",res);
    
    system("pause");

    return 0;
}
