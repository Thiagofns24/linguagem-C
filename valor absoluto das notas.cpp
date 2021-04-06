//Objetivo: Calcular o valor absoluto da diferença entre duas notas
//Entrada: nota1, nota2
//Saída: Diferença

#include<stdio.h>
#include<locale.h>
int main(){
	
	// Declaração de variavéis
	int nota1, nota2, diferenca;
	
	// Para usar acentos
	setlocale(LC_ALL,"");
	
	// Leitura das variavéis
	printf("Coloque aqui sua primeira nota:\n");
	scanf("%d", &nota1);
	printf("Coloque aqui sua segunda nota:\n");
	scanf("%d", &nota2);
	
	// Processamento dos dados
	diferenca = nota1 - nota2;
	
	// Declaração de estrutura condicional
	if(diferenca>=0){
		printf("Nota 1:%d\n", nota1);
		printf("Nota 2:%d\n", nota2);
		printf("Sua diferença, é:%d", diferenca);
	}
	else{
		printf("Nota 1:%d\n", nota1);
		printf("Nota 2:%d\n", nota2);
		printf("Valor não absoluto");
	}
	return 0;
}
