#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Declara��o de fun��es

//Limpar o BUFFER da mem�ria
	void limparbuffer(void){
		char c;
		while((c = getchar()) != '\n' && c != EOF);
	}

// Obter cep,n�mero,telefone,data de nascimento e senha;
	int obterinteiros(){
		int cep,numero,telefone,data_de_nascimento,senha;
				void limparbuffer(void);
				printf("Digite o cep: ");
				scanf("%d",&cep);
				limparbuffer();
				printf("Digite o seu n�mero: ");
				scanf("%d",&numero);
				limparbuffer();
				printf("\nDigite o n�mero do telefone: ");
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
	
	//Declara��es de vari�veis
	char digito;
	void limparbuffer(void);
	char nome(char nuser[25]);
	//Op��es menu.
	do{	
	//Tela de boas vindas | menu.
	//system("cls || clear");
	printf(" _________________________________________________\n");
	printf("|                                                 |\n");
	printf("|                                                 |\n");
	printf("|                  BEM VINDO                      |\n");
	printf("| ----------------------------------------------- |\n");
	printf("|                                                 |\n");		
	printf("| * Digite 1 -> para cadastrar usu�rio.           |\n");
	printf("| * Digite 2 -> para consultar usu�rio.			  |\n");
	printf("| * Digite 3 -> para sair.                        |\n");
	printf("|                                                 |\n");
	printf("|_________________________________________________|\n");
	printf("Digite um n�mero:",digito);	
	scanf("%c",&digito);
	limparbuffer();
	
		switch(digito){
		case '1':
				obterinteiros();
			//	nome(nuser);
				system("cls || clear");
				break;
		case '2':
				printf("Digite o nome do usu�rio cadastrado: ");
				scanf("%");
				break;
		case '3':
				printf("At� logo !");
				break;
		default:
				printf("Caractere inv�lido");			
					  }
	}while(digito == 3);	
	
	return 0;
	
	
	
	

	/*OBS:  1. Verifique se os dados s�o coerentes; 
			2. Op��o de repeti��o de entrada de dados para o usu�rio caso os dados estejam incorretos;
			3.Mostrar na tela os dados armazenados e mensagem de �Realizado com Sucesso� ou �Erro no cadastro dos Dados�  na terceira tentativa de cadastro. 
	*/


}
