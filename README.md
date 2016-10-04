#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Declaração de funções

//Limpar o BUFFER da memória
	void limparbuffer(void){
		char c;
		while((c = getchar()) != '\n' && c != EOF);
	}

// Obter cep,número,telefone,data de nascimento e senha;
	int obterinteiros(){
		int cep,numero,telefone,data_de_nascimento,senha;
		
	}

int main(void){	
	//Habilitar caracteres especiais
	setlocale(LC_ALL,"portuguese");
	
	//Declarações de variáveis
	char digito;
	void limparbuffer(void);
	
	//Opções menu.
	do{	
	//Tela de boas vindas | menu.
	//system("cls || clear");
	printf(" _________________________________________________\n");
	printf("|                                                 |\n");
	printf("|                                                 |\n");
	printf("|                  BEM VINDO                      |\n");
	printf("| ----------------------------------------------- |\n");
	printf("|                                                 |\n");		
	printf("| * Digite 1 -> para cadastrar usuário.           |\n");
	printf("| * Digite 2 -> para sair.                        |\n");
	printf("|                                                 |\n");
	printf("|_________________________________________________|\n");
	printf("Digite um número:",digito);	
	scanf("%c",&digito);
	limparbuffer();
	
		switch(digito){
		case '1':
				
				obterinteiros();
				printf(" ");
				system("cls || clear");
				break;
		case '2':
				printf("Até logo !");
				break;
		default:
				printf("Caractere inválido");			
					  }
	}while(digito == 2);	
	
	return 0;
  
  }
