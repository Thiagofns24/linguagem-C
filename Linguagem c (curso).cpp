//Objetivo: Calcular a média de 3 notas e falar se o auluno foi aprovado ou reprovado
//Entrada: nota1, nota2, nota3
//Saída: média, aprovado, reprovado

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "");
	
	//Declaração de variáveis 
	float nota1, nota2, nota3, media;

	
	//Leitura de variáveis
printf("Digite sua primeira nota:\n");
scanf("%f", &nota1);
printf("Digite sua segunda nota:\n");
scanf("%f", &nota2);
printf("Digite sua terceira nota:\n");
scanf("%f", &nota3);

	//Processamento de dados
	media = (nota1+nota2+nota3) /3;
	printf("A média do aluno foi:\n%f", media);
	
	//Declaração da estrutura condicional
	if(media>7){
	printf("\nAPROVADO");
	}else{
	 printf("\nREPROVADO");
}
return 0;
}



