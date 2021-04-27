//Thiago Fernandes do N.Silva / UC21106878 / ENG de Software.

//Objetivo: Descobrir o perfil das pessoas que frequentam as sessões de determinado cinema.
//Entrada: Quantidade de sessões, nome do filme, quantidade de pessoas que assistiram ao filme, sexo, idade
//Saída: Perfil das pessoas

#include<stdio.h> //biblioteca para printf e scanf 
#include<string.h> //biblioteca para strlen e strcmp: http://linguagemc.com.br/a-biblioteca-string-h/
#include<ctype.h> //biblioteca para o uso do toupper e tolower: http://linguagemc.com.br/ctype-h-toupper-tolower-isalpha-isdigit-em-c/
#include<locale.h> //bibilioteca para uso de acentos
#include<stdlib.h> //biblioteca de alocação de memória, controle de processos, conversões e outras
int main (void){
	setlocale(LC_ALL,""); //uso de acentos 

    //Declaração das variáveis
	char nome[20], nomeFilme[30], vazio, sexo;
	int idade, sessoes, masculino, feminino, M, F;
	int pessoas, quantidadeCriancas = 0, quantidadeAdolescentes = 0, quantidadeAdultos = 0, quantidadeIdosos = 0;
    int saida = 0, sexoMasculino = 0, sexoFeminino = 0, adultoMasculino = 0, adultoFeminino = 0, maiorIdade, maiorIdadeMasculino, maiorIdadeFeminino; //Livro código limpo: NOMENCLATURA
    
    //Declaração da estrutura condicional de dados
    
    //QUANT DE SESSÕES------------
    	printf("O CINEMA DE BRASÍLIA AGRADECE A SUA DISPONIBILIDADE\n");
	do{                                                                                                   //Do/WHILE executa, pelo menos uma vez, o que está dentro dele e só ao final da execução que ele faz o teste.
		printf("\nInforme a quantidade de sessões:\n OBS:informação disponível no ingresso!\n");         //Livro código limpo: Não escreva código complexo em código que deva ser simples.
		scanf("%d", &sessoes);
		fflush(stdin);                                                                                   //Limpa a entrada do buffer principal
		if(sessoes == 2)                                                                                //estrutura condicional
		printf("Próximo passo!\n");
		else printf("Número de sessões inválido\n");                                                   //estrutura condicional
		break;                                                                                        //pausar o sistema 
	}while(sessoes == 2);
	
		//NOME FILME----------------
	do{
		printf("\nDigite o nome do filme:");
		fgets(nomeFilme, 30, stdin);                                                                //especificação do tamanho máximo da string, faz a leitura a partir de um arquivo de dados
		fflush(stdin);
		if (strlen(nomeFilme) <= 2)
		printf("nome muito curto!\n");
		else printf("Próximo passo!\n");
		break;
	}while(strlen(nomeFilme) <= 2);
	
	//QUANT DE PESSOAS QUE ASSISTIRAM AO FILME---------------
	do{
		printf("\nInforme a quantidade de pessoas que assistiram ao filme:\n OBS:informação disponível no ingresso!\n");
		scanf("%d", &pessoas);
		fflush(stdin);
		if(pessoas >= 10)
		printf("Próximo passo!\n");
		else printf("Número de pessoas inválido\n");
		break;
	}while(pessoas>=10);
	
	//IDADE USUÁRIOS---------
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
        
        //SEXO USUÁRIOS-----------
        do
        {
            printf("Informe o sexo dos usuarios (F|M): \n ");
            scanf("%c", &sexo);
            fflush(stdin);
            sexo = toupper(sexo);                                                             //Converte um caracter para maiúsculo

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
    
        //CONTABILIZAÇÃO DOS USUÁRIOS
        if (idade < 14 )// se idade for menor que 14 
        {
            quantidadeCriancas = quantidadeCriancas + 1;                                    //quantidade de crianças recebe o valor de QuantidadeCriancas + 1 a cada vez que uma idade estiver nos parametros da classe criança
                                                        
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
            printf("Erro na classificação de Idades!");                              //mostrar na tela SOMENTE se algo der muito errado dentro do funcionamento do programa
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
    
    printf("\nOBRIGADO POR CONTRIBUIR COM O CINEMA DE BRASÍLIA, ATÉ A PRÓXIMA!!!!\n");
   
    

    printf("\nPress any key to exit the program!\n...");
    
    return 0;
}
