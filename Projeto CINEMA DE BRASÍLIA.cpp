//Thiago Fernandes do N.Silva / UC21106878 / ENG de Software.

//Objetivo: Descobrir o perfil das pessoas que frequentam as sess�es de determinado cinema.
//Entrada: Quantidade de sess�es, nome do filme, quantidade de pessoas que assistiram ao filme, sexo, idade
//Sa�da: Perfil das pessoas

#include<stdio.h> //biblioteca para printf e scanf 
#include<string.h> //biblioteca para strlen e strcmp: http://linguagemc.com.br/a-biblioteca-string-h/
#include<ctype.h> //biblioteca para o uso do toupper e tolower: http://linguagemc.com.br/ctype-h-toupper-tolower-isalpha-isdigit-em-c/
#include<locale.h> //bibilioteca para uso de acentos
#include<stdlib.h> //biblioteca de aloca��o de mem�ria, controle de processos, convers�es e outras
int main (void){
	setlocale(LC_ALL,""); //uso de acentos 

    //Declara��o das vari�veis
	char nome[20], nomeFilme[30], vazio, sexo;
	int idade, sessoes, masculino, feminino, M, F;
	int pessoas, quantidadeCriancas = 0, quantidadeAdolescentes = 0, quantidadeAdultos = 0, quantidadeIdosos = 0;
    int saida = 0, sexoMasculino = 0, sexoFeminino = 0, adultoMasculino = 0, adultoFeminino = 0, maiorIdade, maiorIdadeMasculino, maiorIdadeFeminino; //Livro c�digo limpo: NOMENCLATURA
    
    //Declara��o da estrutura condicional de dados
    
    //QUANT DE SESS�ES------------
    	printf("O CINEMA DE BRAS�LIA AGRADECE A SUA DISPONIBILIDADE\n");
	do{                                                                                                   //Do/WHILE executa, pelo menos uma vez, o que est� dentro dele e s� ao final da execu��o que ele faz o teste.
		printf("\nInforme a quantidade de sess�es:\n OBS:informa��o dispon�vel no ingresso!\n");         //Livro c�digo limpo: N�o escreva c�digo complexo em c�digo que deva ser simples.
		scanf("%d", &sessoes);
		fflush(stdin);                                                                                   //Limpa a entrada do buffer principal
		if(sessoes == 2)                                                                                //estrutura condicional
		printf("Pr�ximo passo!\n");
		else printf("N�mero de sess�es inv�lido\n");                                                   //estrutura condicional
		break;                                                                                        //pausar o sistema 
	}while(sessoes == 2);
	
		//NOME FILME----------------
	do{
		printf("\nDigite o nome do filme:");
		fgets(nomeFilme, 30, stdin);                                                                //especifica��o do tamanho m�ximo da string, faz a leitura a partir de um arquivo de dados
		fflush(stdin);
		if (strlen(nomeFilme) <= 2)
		printf("nome muito curto!\n");
		else printf("Pr�ximo passo!\n");
		break;
	}while(strlen(nomeFilme) <= 2);
	
	//QUANT DE PESSOAS QUE ASSISTIRAM AO FILME---------------
	do{
		printf("\nInforme a quantidade de pessoas que assistiram ao filme:\n OBS:informa��o dispon�vel no ingresso!\n");
		scanf("%d", &pessoas);
		fflush(stdin);
		if(pessoas >= 10)
		printf("Pr�ximo passo!\n");
		else printf("N�mero de pessoas inv�lido\n");
		break;
	}while(pessoas>=10);
	
	//IDADE USU�RIOS---------
    do
    {
        do
        {
            printf("\nInforme a idade: ");
            scanf("%d", &idade);
            fflush(stdin);                                                                       // limpeza de buffer

            if (idade < 3 || idade > 100)                                                       // informa idade invalida caso < 3 OU > 100
            {
                printf("Idade Invalida!\n");
                break;
            }
        } while (idade < 3 || idade > 100);
        
        //SEXO USU�RIOS-----------
        do
        {
            printf("Informe o sexo dos usuarios (F|M): \n ");
            scanf("%c", &sexo);
            fflush(stdin);
            sexo = toupper(sexo);                                                             //Converte um caracter para mai�sculo

            if  (sexo == 'F'){
                sexoFeminino = sexoFeminino + 1;                                             //contador
            }
            else if ( sexo == 'M'){
                sexoMasculino = sexoMasculino + 1;                                          //contador
            }
            else{
                printf("Sexo invalido!\n");
                break;
            }
        } while (sexo != 'M' && sexo != 'F');
    
        //CONTABILIZA��O DOS USU�RIOS
        if (idade < 14 )// se idade for menor que 14 
        {
            quantidadeCriancas = quantidadeCriancas + 1;                                    //quantidade de crian�as recebe o valor de QuantidadeCriancas + 1 a cada vez que uma idade estiver nos parametros da classe crian�a
                                                        
        }
        else if (idade < 18)                                                               // se for menor que 18 (ate 17) e maior que 13  (citado no ultimo if)
        {
            quantidadeAdolescentes = quantidadeAdolescentes + 1;                          // quantidade de Adolescentes recebe o valor de QuantidadeAdolescentes + 1 a cada vez que uma idade estiver nos parametros da classe adolescente
                                                                    
        }
        else if(idade >= 18 ){                                                           // se idade for maior ou igual a 18
            maiorIdade = maiorIdade + 1;                                                //quantidadeAdultos recebe o valor de QuantidadeAdultos + 1 a cada vez que uma idade estiver nos parametros da classe adulto
                                                        

            if (sexo == 'F'){// se for feminino
                maiorIdadeFeminino = maiorIdadeFeminino + 1;
            }
            else if (sexo == 'M'){ // se for masculino
                maiorIdadeMasculino = maiorIdadeMasculino  + 1;
            }
        }
        else if (idade < 101)// se idade for menor que 101 (ate 100)
        {
            quantidadeIdosos = quantidadeIdosos + 1;                                   //quantidadeIdosos recebe o valor de QuantidadeIdosos + 1 a cada vez que uma idade estiver nos parametros da classe idosos 
                                                            
        }
        else{
            printf("Erro na classifica��o de Idades!");                              //mostrar na tela SOMENTE se algo der muito errado dentro do funcionamento do programa
        }

        saida = saida + 1;
    } while (saida < pessoas);

    // imprime resultados (DEBUG)  
    system("cls"); 
    printf("Resultados:\n");
    printf("Filme: %s", nomeFilme); //PEDIDO NO PROJETO
    printf("Quantidade de Criancas: %d\n",quantidadeCriancas); 
    printf("Quantidade de Adolescentes: %d\n",quantidadeAdolescentes); 
    printf("Quantidade de Adultos: %d\n",quantidadeAdultos); 
    printf("Quantidade de Idosos: %d\n",quantidadeIdosos); 
    printf("Quantidade total de Homens: %d\n",sexoMasculino); 
    printf("Quantidade total de Mulheres: %d\n", sexoFeminino); 
   system("pause"); //comando para pausar a tela
    
    //QUANTIDADE DE MAIORES DE IDADE
    system("cls"); //abrir nova janela
    printf("Quantidade de Homens maiores de idade: %d\n",maiorIdadeMasculino);
    printf("Quantidade de Mulheres maiores de idade: %d\n",maiorIdadeFeminino);
    
    printf("\nOBRIGADO POR CONTRIBUIR COM O CINEMA DE BRAS�LIA, AT� A PR�XIMA!!!!\n");
   
    

    printf("\nPress any key to exit the program!\n...");
    
    return 0;
}
