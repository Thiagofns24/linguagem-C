//Objetivo: Calcular o valor absoluto da diferen�a entre duas notas
//Entrada: Nota1, Nota2
//Sa�da: Diferen�a

#include<stdio.h>
#include<locale.h>
int main(){
	
	// Declara��o de variav�is
	float Nota1, Nota2, Diferenca;
	
	// Leitura de variav�is
	printf("Coloque aqui sua primeira nota:\n");
	scanf("%f", &Nota1);
	printf("Coloque aqui sua segunda nota:\n");
	scanf("%f", &Nota2);
	
	// Processamento dos dados
	Diferenca = Nota1 - Nota2;
	
	// Resultado
	setlocale(LC_ALL, "");
	printf("A diferenca absoluta, �:%f\n", Diferenca);
	return 0;
	
	
}

