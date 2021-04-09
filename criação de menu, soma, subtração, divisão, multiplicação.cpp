//Objetivo: Ler dois valores e depois criar um menu de 4 opções, somar, subtrair, dividir e multiplicar. Após o usuário escolher uma opçã, mostrar o resultado da operação
//Entrada: valor1, valor2
//Saída: Resultado

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "");
	
	// Declaração de variáveis
	float valor1, valor2;
	char somar, subtrair, dividir, multiplicar;
	int opcao;
	
	//Leitura de variáveis
	printf("Digite seu valor 1:");
	scanf("%f", &valor1);
	printf("Digite seu valor 2:");
	scanf("%f", &valor2);
	printf("Vamos para o próximo passo, escolha uma opção de cálculo:");
	printf("\n1-somar");
	printf("\n2-subtrair");
	printf("\n3-dividir");
	printf("\n4-multiplicar");
	scanf("%d", &opcao);
	printf("Você fez uma ótima escolha, PARABÉNS !!!\n");
	
	
	// Declaração da estrutura condicional
	switch(opcao){
	case 1:
	printf("Resultado da sua soma: %.2f", valor1 + valor2);
	break;
	case 2:
	printf("Resultado da sua subtração: %.2f", valor1 - valor2);
	break;
	case 3:
	printf("Resultado da sua divisão: %.2f", valor1 / valor2);
	break;
	case 4:
	printf("Resultado da sua multiplicação: %.2f", valor1*valor2);
	break;
	default:
    printf("Opção inválida");
	break;						
	}
	return 0;
	
	
}

