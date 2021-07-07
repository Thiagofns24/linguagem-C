

//printf("\033[31;1m%d\033[0m << código>>"); Vermelho
//printf("\033[34;1m%d\033[0m << código>>"); Azul
//printf("\033[32;1m%d\033[0m << código>>"); Verde

#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
#include<ctype.h> 
#include<locale.h> 

 void desenhaBorda(){
 	printf("----------------------------------------------------\n");
 }
	void limpaTela(){
		system("cls");
	}
int main(void){
    setlocale(LC_ALL,"Portuguese");
system("color 3F");
   
    char nome_destino[50], menu_princ, menu_destino_escolhido;
    int assentos_aviao, menu_opcao_destino, numero_voo;
    float valor_passagem;


do{// do-while para voltar ao menu principal   
desenhaBorda();
    printf("-----------------SALUMAR LINHAS AEREAS--------------\n");
desenhaBorda();
   
	//DESTINO DESEJADO
do{
		printf("\nInsira o nome do seu destino:\n");
		fgets(nome_destino, 30, stdin);                                                         
		fflush(stdin);
		if (strlen(nome_destino) <= 2)
		printf("nome muito curto!\n");
		break;
	}while(strlen(nome_destino) <= 2);
	
		//NÚMERO DO VOO
	printf("\nDigite o número do seu voo:\n");
	scanf("%d", &numero_voo);
    fflush(stdin);
   	
    limpaTela();
    
    desenhaBorda();
    printf("-----------------SALUMAR LINHAS AEREAS--------------\n");
desenhaBorda();

	   //VALOR PASSAGEM
   		do{							
			printf("    INFORME O VALOR DA PASSAGEM\n\n");
		    scanf("%f", &valor_passagem);
		    fflush(stdin);
				if(valor_passagem<0)
					printf("\n    VALOR INVÁLIDO\n");
		}while(valor_passagem<0);
   
    limpaTela();
   
   desenhaBorda();
    printf("-----------------SALUMAR LINHAS AEREAS--------------\n");
desenhaBorda();


   	//QUANTIDADE DE ASSENTOS
	printf("\nDigite a quantidade de assentos do avião selecionado:\n");
	scanf("%d", &assentos_aviao);
	fflush(stdin);
	do{
		if(assentos_aviao < 90 || assentos_aviao > 200){
		printf("Número de assentos inválido!");
		scanf("%d", &assentos_aviao);
		fflush(stdin);
		}
		}while(assentos_aviao < 90 || assentos_aviao > 200);
	
 	//Variáveis de reserva
    int aux_assentos=1,aux_reserva=1, primeira_reserva=1, aux_canceladas, aux_confirma, cont_confirmada, cont_reservada, aux_disponiveis;
    int idade_cli_reserva[500], assento_reserva[assentos_aviao];
    char nome_cli_reserva[500][100], vetor_assentos[assentos_aviao], situacao_reserva[500];
    char confirma_cancelamento, valida_confirmacao, sair_cancelada, sair_confirmada;
    float valor_passagem_reserva[500], valor_total_confirmadas, valor_reservas;
	
		for(aux_assentos=1;aux_assentos<=assentos_aviao;aux_assentos++){ 
			vetor_assentos[aux_assentos] = 'D';
		}

    limpaTela();
    
	
	do{ 
desenhaBorda();
    printf("-----------------SALUMAR LINHAS AEREAS--------------\n");
desenhaBorda();
	    printf("    MENU DE OPÇÕES\n\n\n");
	    printf("1 - VERIFICAR OCUPAÇÃO DOS VOOS\n\n");
	    printf("2 - EFETUAR RESERVA\n\n");
	    printf("3 - CANCELAR RESERVA\n\n");
	    printf("4 - CONFIRMAR RESERVA\n\n");
	    printf("5 - CONSULTAR RESUMO DO DESTINO\n\n");
		printf("6 - SAIR DO PROGRAMA\n\n\n");
	    printf("    INFORME A OPÇÃO DESEJADA: ");
	    scanf("%d", &menu_opcao_destino);
	   
	    limpaTela();
	   
	    switch(menu_opcao_destino){
	    	case 1:	
    		   desenhaBorda();
               printf("-----------------SALUMAR LINHAS AEREAS--------------\n");
               desenhaBorda();
			    printf("    MAPA DE ASSENTOS\n\n");

			        for(aux_assentos=1;aux_assentos<=assentos_aviao;aux_assentos++){
				    	if(vetor_assentos[aux_assentos]=='D')
				    		printf(" %d-\033[32;1m%c\033[0m",aux_assentos,vetor_assentos[aux_assentos]);
				    		else
				    		if(vetor_assentos[aux_assentos]=='R')
				    			printf(" %d-\033[31;1m%c\033[0m",aux_assentos,vetor_assentos[aux_assentos]);
				    			else
				    				printf(" %d-\033[94;1m%c\033[0m",aux_assentos,vetor_assentos[aux_assentos]);
					}
											
			 ;break;
	    	case 2: 
				desenhaBorda();
                printf("-----------------SALUMAR LINHAS AEREAS--------------\n");
            desenhaBorda();

				do{
					fflush(stdin);
					printf("INFORME O NOME DO PASSAGEIRO Nº %d: ", aux_reserva); 
					fgets(nome_cli_reserva[aux_reserva],100,stdin);
					fflush(stdin);
						if(strlen(nome_cli_reserva[aux_reserva]) <= 6) 
							printf("\nNOME INVÁLIDO\n");	
				}while(strlen(nome_cli_reserva[aux_reserva]) <= 6);
				
				do{	
					fflush(stdin);
					printf("\nINFORME A IDADE DO PASSAGEIRO Nº %d: ", aux_reserva);
					scanf("%d",&idade_cli_reserva[aux_reserva]);
					fflush(stdin);
						if(idade_cli_reserva[aux_reserva]<0 ||idade_cli_reserva[aux_reserva]>115)
							printf("\nIDADE INVÁLIDA\n");
				}while(idade_cli_reserva[aux_reserva]<0 ||idade_cli_reserva[aux_reserva]>115);
				
				do{	
					fflush(stdin);
					printf("\nINFORME O ASSENTO DO PASSAGEIRO Nº %d: ", aux_reserva);
					scanf("%d",&assento_reserva[aux_reserva]);
					fflush(stdin);
						if(assento_reserva[aux_reserva]<0 || assento_reserva[aux_reserva]>assentos_aviao)
							printf("\nASSENTO INVÁLIDO\n");
							else {
								if(vetor_assentos[assento_reserva[aux_reserva]]!='D')
									printf("\nASSENTO NÃO DISPONÍVEL\n");}
				}while((assento_reserva[aux_reserva]<0 || assento_reserva[aux_reserva]>assentos_aviao) || vetor_assentos[assento_reserva[aux_reserva]]!='D');
				
				// ASSENTO RESERVADO
				
				vetor_assentos[assento_reserva[aux_reserva]]='R';
				
				// RESERVA ATIVADA
				
				situacao_reserva[aux_reserva]='A';
				
				if(idade_cli_reserva[aux_reserva]<6)
					valor_passagem_reserva[aux_reserva] = valor_passagem/2;
					else
					valor_passagem_reserva[aux_reserva] = valor_passagem;
				
				
				printf("\n\nVALOR DA PASSAGEM DESTA RESERVA: R$ %.2f\n\n", valor_passagem_reserva[aux_reserva]);
				printf("CÓDIGO DA RESERVA: %d\n\n", aux_reserva);
				
			
				aux_reserva++;
				
				;break;
	    	case 3: 
		       desenhaBorda();
               printf("-----------------SALUMAR LINHAS AEREAS--------------\n");
               desenhaBorda();
					do{	
						fflush(stdin);
						printf("\nINFOME O CÓDIGO DA RESERVA A SER CANCELADA: ");
						scanf("%d",&aux_canceladas);
						fflush(stdin);
						
							if(situacao_reserva[aux_canceladas]=='I')
								printf("\nRESERVA JÁ CANCELADA\n");
								else
									if(situacao_reserva[aux_canceladas]=='A' || situacao_reserva[aux_canceladas]=='C')
									break;
										else
										printf("\nRESERVA INEXISTENTE\n");
							
							printf("\nTENTAR NOVAMENTE?[S|N]\n");
							scanf("%c", &sair_cancelada);
							fflush(stdin);
							
							sair_cancelada = toupper(sair_cancelada);
							
								if(sair_cancelada=='N')
									break;
								
					}while(situacao_reserva[aux_canceladas]=='I' || (situacao_reserva[aux_canceladas]!='A' || situacao_reserva[aux_canceladas]!='C'));	
				
				if(sair_cancelada=='N')
					break;
					
				limpaTela();
			
		desenhaBorda();
    printf("-----------------SALUMAR LINHAS AEREAS--------------\n");
desenhaBorda();
			    printf("      DADOS DA RESERVA N° %d\n\n\n", aux_canceladas);
			    
			    printf("Nome do passageiro: %s\n", nome_cli_reserva[aux_canceladas]);
			    printf("Idade do passageiro: %d\n", idade_cli_reserva[aux_canceladas]);
				printf("Assento do passageiro: %d\n\n", assento_reserva[aux_canceladas]);
				
				
				do{
					fflush(stdin);
					printf("CONFIRMA O CANCELAMENTO? [S|N]\n\n");
					scanf("%c", &confirma_cancelamento);
					
					confirma_cancelamento = toupper(confirma_cancelamento);
				
					if(confirma_cancelamento != 'S' && confirma_cancelamento != 'N')
						printf("\nOPÇÃO INVÁLIDA");
				}while(confirma_cancelamento != 'S' && confirma_cancelamento != 'N');
				
				if(confirma_cancelamento=='N')				
					break;
				else{
					// RESERVA CANCELADA
					situacao_reserva[aux_canceladas]='I';
					// ASSENTO DISPONÍVEL 	
					vetor_assentos[assento_reserva[aux_canceladas]]='D';}
				
				
			;break;
	    	case 4: 
		desenhaBorda();
    printf("-----------------SALUMAR LINHAS AEREAS--------------\n");
desenhaBorda();
					do{	
						fflush(stdin);
						printf("\nINFORME O CÓDIGO DA RESERVA A SER CONFIRMADA: ");
						scanf("%d",&aux_confirma);
						fflush(stdin);
							if(situacao_reserva[aux_confirma]=='I')
								printf("\nRESERVA CANCELADA\n");
								else
								if(situacao_reserva[aux_confirma]=='C')
									printf("\nRESERVA CONFIRMADA\n");
										else
										if(situacao_reserva[aux_confirma]=='A')
											break;
											else
											printf("\nRESERVA INEXISTENTE\n");
							
							printf("\nTENTAR NOVAMENTE?[S|N]\n");
							scanf("%c", &sair_confirmada);
							fflush(stdin);
							
							sair_confirmada = toupper(sair_confirmada);
							
								if(sair_confirmada=='N')
									break;
					}while(situacao_reserva[aux_confirma]=='I' || (situacao_reserva[aux_confirma]!='A' || situacao_reserva[aux_confirma]!='C'));	
				
				if(sair_confirmada=='N')
					break;
									
				limpaTela();
			
	desenhaBorda();
    printf("-----------------SALUMAR LINHAS AEREAS--------------\n");
desenhaBorda();
			
				printf("      DADOS DA RESERVA N° %d\n\n\n", aux_confirma);
			    
			    printf("Nome do passageiro: %s\n", nome_cli_reserva[aux_confirma]);
			    printf("Idade do passageiro: %d\n", idade_cli_reserva[aux_confirma]);
				printf("Assento do passageiro: %d\n\n", assento_reserva[aux_confirma]);
				
				
				do{
					fflush(stdin);
					printf("CONFIRMA A RESERVA? [S|N]\n\n");
					scanf("%c", &valida_confirmacao);
					
					valida_confirmacao = toupper(valida_confirmacao);
				
					if(valida_confirmacao != 'S' && valida_confirmacao != 'N')
						printf("\nOPÇÃO INVÁLIDA");
				}while(valida_confirmacao != 'S' && valida_confirmacao != 'N');
				
				if(valida_confirmacao=='N')
					break;
				else{
				// RESERVA CONFIRMADA
				situacao_reserva[aux_confirma]='C';
				// ASSENTO CONFIRMADO
				vetor_assentos[assento_reserva[aux_confirma]]='C';
				}
			
			;break;
	    	case 5: 
desenhaBorda();
    printf("-----------------SALUMAR LINHAS AEREAS--------------\n");
desenhaBorda();;
			    
			    printf("      RESUMO DO DESTINO - %s\n\n\n", nome_destino);
				
				valor_reservas=0;
			    valor_total_confirmadas=0;
			    cont_reservada=0;
			    cont_confirmada=0;
											    			    
			    for(int i=1;i<=assentos_aviao;i++){ 
			    	
			    	if(vetor_assentos[i]=='R'){
			    		
			    		cont_reservada++;}
			    	
			    		else
			    			if(vetor_assentos[i]=='C'){
			    	
			    			cont_confirmada++;}
				};
				
				for(int i=1;i<=aux_reserva;i++){ 
			    	
			    	if(situacao_reserva[i]=='A')
			    		
			    		valor_reservas = valor_reservas+valor_passagem_reserva[i];
			    	
			    		else
			    			if(situacao_reserva[i]=='C'){
			    	
			    			valor_total_confirmadas = valor_total_confirmadas+valor_passagem_reserva[i];}
				};
				
				
							
				aux_disponiveis = (assentos_aviao-cont_confirmada-cont_reservada);
				
				printf("TOTAL DE PASSAGENS RESERVADAS: %d", cont_reservada);
				printf("\n\nTOTAL DE PASSAGENS CONFIRMADAS: %d", cont_confirmada);
				printf("\n\nTOTAL DE PASSAGENS DISPONÍVEIS: %d", aux_disponiveis);
				printf("\n\n\033[93;1mVALOR TOTAL DE PASSAGENS RESERVADAS: %.2f\033[0m", valor_reservas);
				printf("\n\n\033[92;1mVALOR TOTAL DE PASSAGENS CONFIRMADAS: %.2f\033[0m\n\n", valor_total_confirmadas);
				
				limpaTela();			
			;break;
			case 6: ;break;
	    	default:printf("\nOPÇÃO INVÁLIDA\n");   	
	    };    
		
		if(menu_opcao_destino==6)
			break;
		else
			do{
			fflush(stdin);
			printf("\n\n\n     DESEJA VOLTAR AO MENU DE OPÇÕES DO DESTINO?[S|N]\n\n\n");
			scanf("%c", &menu_destino_escolhido);
			fflush(stdin);
			
			menu_destino_escolhido = toupper(menu_destino_escolhido);
			
				if(menu_destino_escolhido != 'S' && menu_destino_escolhido != 'N')
					printf("\nOPÇÃO INVÁLIDA");
			}while(menu_destino_escolhido != 'S' && menu_destino_escolhido != 'N');
		
		limpaTela();
	
	}while(menu_destino_escolhido=='S');
	
		limpaTela();
		
	if(menu_opcao_destino==6)
			break;
	else		
		do{
			fflush(stdin);
			printf("\nDESEJA CADASTRAR OUTRO DESTINO?[S|N]\n");
			scanf("%c", &menu_princ);
			fflush(stdin);
			
			menu_princ = toupper(menu_princ);
			
				if(menu_princ != 'S' && menu_princ != 'N')
					printf("\nOPÇÃO INVÁLIDA");
		}while(menu_princ != 'S' && menu_princ != 'N');	
		
	limpaTela();
	
}while(menu_princ=='S');

	limpaTela();

desenhaBorda();
    printf("-----------------SALUMAR LINHAS AEREAS--------------\n");
desenhaBorda();

	printf("PROGRAMA FINALIZADO\n\n");
	
   return 0;
}

