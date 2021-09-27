//JOGO DA FORCA

#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
#include<time.h>

using namespace std;

void limpaTela(){
    system("CLS");
}

 void desenhaBorda(){
 	printf("----------------------------------------------------\n");
 }
 
string retornaPalavraAleatoria(){
		string palavras[3] = {"abacaxi", "manga", "morango"};
	
	//Gerado no intervalo, (0, 1, 2)
	int indiceAleatorio = rand() % 3;
	
	//Exibe a palavra aleat�ria
//	cout << palavras[indiceAleatorio];
return palavras[indiceAleatorio];
}

string retornaPalavraComMascara(string palavra, int tamanhoDaPalavra){
	
		int cont = 0;
	string palavraComMascara;
	
	//coloca uma m�scara
	while(cont < tamanhoDaPalavra){
		palavraComMascara += "_";
		cont++;
	}
	return palavraComMascara; //A string deve retornar alguma coisa sempre
}

void exibeStatus(string palavraComMascara, int tamanhoDaPalavra, int tentativasRestantes, string letrasJaArriscadas, string mensagem){
     
	 cout << mensagem << "\n";
	 cout << "palavra:" << palavraComMascara << "(Tamanho:" << tamanhoDaPalavra << ")";
	 cout << "\nTentativas Restantes:" << tentativasRestantes;

	 
	//Exibe as letras arriscadas
	int cont;
	cout << "\nLetras Arriscadas:";
	for(cont = 0; cont < letrasJaArriscadas.size(); cont++){
		cout << letrasJaArriscadas[cont] << ", ";
	}
}

int jogar(int numeroDeJogadores){
	
	//Palavra a ser adivinhada
	string palavra;
	
	//Confere o numeor de jogadores
	if(numeroDeJogadores == 1){
		
 	//palavra a ser adivinhada 
   palavra = retornaPalavraAleatoria ();

	}else{
	
	cout << "\nDigite uma palavra:";
	cin >> palavra;
		
	}
	


   //Tamanho da palavra
int tamanhoDaPalavra = palavra.size (); // o size me mostra o tamanho da palavra no programa

   //palavra mascarada
string palavraComMascara = retornaPalavraComMascara(palavra, tamanhoDaPalavra);

//Vari�veis gerais
int tentativas = 0, maximoDeTentativas = 10;                     //N�mero de tentativas e erros 
int cont = 0;                                                  //Auxiliar para la�os de repeti��o
char letra;                                                   //Letra arriscada pelo usu�rio
int opcao;                                                   //Op��es finais
string letrasJaArriscadas;                                  //Acumula as tentativas do jogador
string mensagem = "Bem vindo ao jogo!!!";                  //Feedback do jogador
bool jaDigitouLetra = false, acertouLetra = false;        //Auxiliar para saber se a letra j� foi digitada


while(palavra != palavraComMascara && maximoDeTentativas - tentativas > 0){
	 
	limpaTela();
	
	 
	 //Mostra o status atual do jogo
	 exibeStatus( palavraComMascara, tamanhoDaPalavra, maximoDeTentativas - tentativas, letrasJaArriscadas, mensagem);
	 
	 //L� um palpite
	 cout << "\nDigite uma letra:";
	 cin >> letra;
	 
	 //Percorre as letras j� arriscadas
	 for(cont = 0; cont < tentativas; cont++){
	 	
	 	//Se encontrar a letra
	 	if(letrasJaArriscadas[cont] == tolower(letra)){
	 		
	 		mensagem = "Essa letra j� foi digitada!!";
	 		
	 		//Indica com a vari�vel booleana 
	 		jaDigitouLetra = true;
		 }
	 }
	 
	//Se for uma letra nova
        if(jaDigitouLetra == false){

            //Incrementa as letras j� arriscadas
            letrasJaArriscadas += tolower(letra);

            //Percorre a palavra real 
            for(cont = 0; cont < tamanhoDaPalavra; cont++){

                //Se a letra existir na palavra escondida
                if(palavra[cont] == tolower(letra)){

                    //Fa�o aquela letra aparecer na palavraComMascara
                    palavraComMascara[cont] = palavra[cont];

                    acertouLetra = true;

                }
            }

            if(acertouLetra == false){

                mensagem = "Voce errou uma letra!";

            }else{

                mensagem = "Voce acertou uma letra!";

            }

            //Aumenta uma tentativa realizada
            tentativas++;

        }

        //Reinicia auxiliares
        jaDigitouLetra = false;
        acertouLetra = false;

    }

if(palavra == palavraComMascara){
	
	limpaTela();
	cout << "Parab�ns, voc� venceu!!";
	cout << "\nDeseja reiniciar?";
	cout << "\n1-Sim";
	cout << "\n2-N�o";
	cin >> opcao;
	return opcao;
	
}else{
	
	limpaTela();
	cout << "Bleh, voc� perdeu!";
	cout << "\nDeseja reiniciar?";
	cout << "1-Sim";
	cout << "2-N�o";
	cin >> opcao;
	return opcao;
	
	
	cout << "\n\nA palavra secreta �:" << palavra << "(tamanho:" << tamanhoDaPalavra << ")";
	cout << "\n\nMascara:" << palavraComMascara;
	
}
	}


void menuInicial(){
	
	//op��o escolhida pelo usu�rio
	int opcao = 0;
	
	while (opcao < 1 || opcao > 3){
		limpaTela();
		desenhaBorda();
        cout << "-----------------BEM VINDO AO GAME--------------\n";
        desenhaBorda();
		cout << "\n1- Jogar sozinho\n";
		desenhaBorda();
		cout << "\n2- Jogar em dupla\n";
		desenhaBorda();
		cout << "\n3- Sobre\n";
		desenhaBorda();
		cout << "\n4- Sair\n";
		desenhaBorda();
		cout << "\n Escolha uma op��o e tecle ENTER:";
		cin >> opcao;
		
		switch(opcao){
			case 1: 
	 if(jogar(1) == 1){
	 	menuInicial();
	 };
	
	 case 2: 
	 if(jogar(2) == 1){
	 	menuInicial();
	 };
			break;
			
			case 3: 
			cout << "Informa��es do jogo";
			limpaTela();
			desenhaBorda();
			cout << "Jogo desenvolvido por Thiago Fernandes em 2021.\n";
			desenhaBorda();
			cout << "\n1- Voltar";
			cout << "\n2- Sair";
			cin >> opcao;
			if (opcao == 1){
				menuInicial();
			}
			if (opcao == 2){
				cout << "\n\nObrigado, volte sempre.";
			}
			break;
		
			case 4:
				cout << "At� mais!";
				break;
					}
	}

}

int main(){
		setlocale(LC_ALL, "Portuguese");
		system("color 3F");
	srand((unsigned)time(NULL));
	menuInicial();
}
