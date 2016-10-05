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
				void limparbuffer(void);
				printf("Digite o cep: ");
				scanf("%d",&cep);
				limparbuffer();
				printf("Digite o seu número: ");
				scanf("%d",&numero);
				limparbuffer();
				printf("\nDigite o número do telefone: ");
				scanf("%d",&telefone);
				limparbuffer();
				printf("Digite a data de nascimento: ");
				scanf("%d",&data_de_nascimento);
				limparbuffer();
				printf("Digite a sua senha: ");
				scanf("%d",&senha);
				limparbuffer();
				printf("Cadastro realizado com sucesso !");		
		return 0;
	}
	
	/*char nome(char nuser[25]){
		printf("Digite o seu nome: ");
		scanf("%s",&nuser);
		return nuser;
	}*/

int main(void){	
	//Habilitar caracteres especiais
	setlocale(LC_ALL,"portuguese");
	
	//Declarações de variáveis
	char digito;
	void limparbuffer(void);
	char nome(char nuser[25]);
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
	printf("| * Digite 2 -> para consultar usuário.			  |\n");
	printf("| * Digite 3 -> para sair.                        |\n");
	printf("|                                                 |\n");
	printf("|_________________________________________________|\n");
	printf("Digite um número:",digito);	
	scanf("%c",&digito);
	limparbuffer();
	
		switch(digito){
		case '1':
				obterinteiros();
			//	nome(nuser);
				system("cls || clear");
				break;
		case '2':
				printf("Digite o nome do usuário cadastrado: ");
				scanf("%");
				break;
		case '3':
				printf("Até logo !");
				break;
		default:
				printf("Caractere inválido");			
					  }
	}while(digito == 3);	
	
	return 0;
	
	
	
	

	/*OBS:  1. Verifique se os dados são coerentes; 
			2. Opção de repetição de entrada de dados para o usuário caso os dados estejam incorretos;
			3.Mostrar na tela os dados armazenados e mensagem de “Realizado com Sucesso” ou “Erro no cadastro dos Dados”  na terceira tentativa de cadastro. 
	*/


}
