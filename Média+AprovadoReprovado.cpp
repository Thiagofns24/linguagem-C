//Objetivo: Calcular a m�dia de 3 notas e falar se o auluno foi aprovado ou reprovado
//Entrada: nota1, nota2, nota3
//Sa�da: m�dia, aprovado, reprovado

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "");
	
	//Declara��o de vari�veis 
	float nota1, nota2, nota3, media;

	
	//Leitura de vari�veis
printf("Digite sua primeira nota:\n");
scanf("%f", &nota1);
printf("Digite sua segunda nota:\n");
scanf("%f", &nota2);
printf("Digite sua terceira nota:\n");
scanf("%f", &nota3);

	//Processamento de dados
	media = (nota1+nota2+nota3) /3;
	printf("A m�dia do aluno foi:\n%.2f", media);
	
	//Declara��o da estrutura condicional
	if(media>7){
	printf("\nO aluno foi APROVADO");
	}else{
	 printf("\nO aluno foi REPROVADO");
}
return 0;
}



