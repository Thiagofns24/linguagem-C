//Objetivo: Calcular o valor absoluto da diferença entre duas notas
//Entrada: Nota1, Nota2
//Saída: Diferença

#include<stdio.h>
#include<locale.h>
int main(){
	
	// Declaração de variavéis
	int Nota1, Nota2, Diferenca;
	
	// Leitura de variavéis
	printf("Coloque aqui sua primeira nota:\n");
	scanf("%d", &Nota1);
	printf("Coloque aqui sua segunda nota:\n");
	scanf("%d", &Nota2);
	
	// Processamento dos dados
	Diferenca = Nota1 - Nota2;
	
	// Resultado
	setlocale(LC_ALL, "");
	printf("A diferenca absoluta, é:%d\n", Diferenca);
	return 0;
	
	
}

