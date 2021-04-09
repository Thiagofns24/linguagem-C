//Objetivo: Ler dois valores e depois criar um menu de 4 op��es, somar, subtrair, dividir e multiplicar. Ap�s o usu�rio escolher uma op��, mostrar o resultado da opera��o
//Entrada: valor1, valor2
//Sa�da: Resultado

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "");
	
	// Declara��o de vari�veis
	float valor1, valor2;
	char somar, subtrair, dividir, multiplicar;
	int opcao;
	
	//Leitura de vari�veis
	printf("Digite seu valor 1:");
	scanf("%f", &valor1);
	printf("Digite seu valor 2:");
	scanf("%f", &valor2);
	printf("Vamos para o pr�ximo passo, escolha uma op��o de c�lculo:");
	printf("\n1-somar");
	printf("\n2-subtrair");
	printf("\n3-dividir");
	printf("\n4-multiplicar");
	scanf("%d", &opcao);
	printf("Voc� fez uma �tima escolha, PARAB�NS !!!\n");
	
	
	// Declara��o da estrutura condicional
	switch(opcao){
	case 1:
	printf("Resultado da sua soma: %.2f", valor1 + valor2);
	break;
	case 2:
	printf("Resultado da sua subtra��o: %.2f", valor1 - valor2);
	break;
	case 3:
	printf("Resultado da sua divis�o: %.2f", valor1 / valor2);
	break;
	case 4:
	printf("Resultado da sua multiplica��o: %.2f", valor1*valor2);
	break;
	default:
    printf("Op��o inv�lida");
	break;						
	}
	return 0;
	
	
}

