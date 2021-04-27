//Objetivo: Calcular a média de 3 valores usando vetores
//Entrada: 3 valores
//Saída: Média

#include<stdio.h>
int main(){
float vetor[3];
int i;
for(i=0; i<3; i++){
	printf("Digite um valor:");
	scanf("%f", &vetor[i]);
}
for(i=0;i<3;i++){
	printf("\nvetor[%d]= %.2f", i, vetor[i]);
}
printf("\na media dos valores é: %.2f", (vetor[0]+vetor[1]+vetor[2])/3);
}
