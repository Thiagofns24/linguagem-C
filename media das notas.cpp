//Objetivo: Calcular a m�dia de duas notas
//Entrada: Nota1, Nota2
//Sa�da: M�dia

#include<stdio.h>
#include<locale.h>
int main(){
	
// Declara��o de variav�is
int  Nota1, Nota2, Media;

// Leitura de variav�is
printf("Coloque aqui sua primeira nota:\n");
scanf("%f", &Nota1);
printf("Coloque aqui sua segunda nota:\n");
scanf("%f", &Nota2);

// Processamento dos dados
Media = Nota1 + Nota2 /2;

// Resultado
setlocale(LC_ALL, "");
printf("O valor da sua m�dia, �:\n", Media);
return 0;
}




