//Armazenamento de dados ALUNO

#include<stdio.h>
int main(){
	
	{
		struct ficha_aluno //tipo de dado
		{
			char nome[40];
			int numero;
			float nota;
		}; //definição da struct
		
		struct ficha_aluno aluno;
		printf("\n----CADASTRO ALUNO-----\n\n");
		printf("nome do aluno:");
		fgets(aluno.nome,40,stdin);
		
		printf("Digite o número do aluno:");
		scanf("%d", &aluno.numero);
		
		printf("Digite a nota do aluno:");
		scanf("%f",&aluno.nota);
		
		printf("\n\n-----LENDO OS DADOS DA STRUCT-----\n\n");
		printf("nome:%s", aluno.nome);
		printf("numero:%d\n", aluno.numero);
		printf("nota:%.2f\n", aluno.nota);
		
		
		}
	}
	

