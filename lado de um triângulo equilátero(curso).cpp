//Objetivo: Informar se tr�s valores aleat�rios s�o iguais entre si para formar os lados de um tri�ngulo equil�tero
//Entrada: valor1, valor2, valor3
//Sa�da: S�o iguais entre si e formam o lado de um tri�ngulo equil�tero

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	
	// Declara��o de vari�veis
	int valor1, valor2, valor3;
	
	// Leitura de vari�veis
	printf("Digite aqui o seu valor 1:");
	scanf("%d", &valor1);
	printf("Digite aqui o seu valor 2:");
	scanf("%d", &valor2);
	printf("Digite aqui o seu valor 3:");
	scanf("%d", &valor3);
	
	// Declara��o da estrutura condicional 
	if(valor1 == valor2 && valor1 == valor3 && valor2 == valor3){
		printf("Seus valores s�o iguais entre si, portanto, formariam uma tri�ngulo equil�tero");
	}else{
		printf("Seus valores s�o diferentes, portanto, N�O formariam um tri�ngulo equil�tero");
	}
	return 0;
}
