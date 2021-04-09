//Objetivo: Informar se três valores aleatórios são iguais entre si para formar os lados de um triângulo equilátero
//Entrada: valor1, valor2, valor3
//Saída: São iguais entre si e formam o lado de um triângulo equilátero

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	
	// Declaração de variáveis
	int valor1, valor2, valor3;
	
	// Leitura de variáveis
	printf("Digite aqui o seu valor 1:");
	scanf("%d", &valor1);
	printf("Digite aqui o seu valor 2:");
	scanf("%d", &valor2);
	printf("Digite aqui o seu valor 3:");
	scanf("%d", &valor3);
	
	// Declaração da estrutura condicional 
	if(valor1 == valor2 && valor1 == valor3 && valor2 == valor3){
		printf("Seus valores são iguais entre si, portanto, formariam uma triângulo equilátero");
	}else{
		printf("Seus valores sâo diferentes, portanto, NÃO formariam um triângulo equilátero");
	}
	return 0;
}
