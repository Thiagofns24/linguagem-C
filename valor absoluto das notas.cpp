//Objetivo: Calcular o valor absoluto da diferen�a entre duas notas
//Entrada: nota1, nota2
//Sa�da: Diferen�a

#include<stdio.h>
#include<locale.h>
int main(){
	
	// Declara��o de variav�is
	int nota1, nota2, diferenca;
	
	// Para usar acentos
	setlocale(LC_ALL,"");
	
	// Leitura das variav�is
	printf("Coloque aqui sua primeira nota:\n");
	scanf("%d", &nota1);
	printf("Coloque aqui sua segunda nota:\n");
	scanf("%d", &nota2);
	
	// Processamento dos dados
	diferenca = nota1 - nota2;
	
	// Declara��o de estrutura condicional
	if(diferenca>=0){
		printf("Nota 1:%d\n", nota1);
		printf("Nota 2:%d\n", nota2);
		printf("Sua diferen�a, �:%d", diferenca);
	}
	else{
		printf("Nota 1:%d\n", nota1);
		printf("Nota 2:%d\n", nota2);
		printf("Valor n�o absoluto");
	}
	return 0;
}
