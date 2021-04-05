//Objetivo: Calcular a média de duas notas
//Entrada: Nota1, Nota2
//Saída: Média

#include<stdio.h>
#include<locale.h>
int main(){
	
// Declaração de variavéis
float  Nota1, Nota2, Media;

// Leitura de variavéis
printf("Coloque aqui sua primeira nota:\n");
scanf("%f", &Nota1);
printf("Coloque aqui sua segunda nota:\n");
scanf("%f", &Nota2);

// Processamento dos dados
Media = Nota1 + Nota2 /2;

// Resultado
setlocale(LC_ALL, "");
printf("O valor da sua média, é:\n", Media);
return 0;
}




