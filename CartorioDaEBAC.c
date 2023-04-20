#include <stdio.h>  //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca responsavel por cuidar das strings

int registro() //Fun��o responsavel por cadastrar os usu�rios no sistema
{
	//Inicio cria��o de vari�veis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//Final da cria��o de vari�veis/string
	
	printf(" Digite o CPF a ser cadastrado: "); //Coletando informa��es do usu�rio
	scanf("%s",cpf); //Refere-se a strings
	strcpy(arquivo,cpf); //Responsavel por copiar os valores das string
	printf("\n"); //Refere-se a pular uma linha
	
	FILE *file; //Cria o arquivo no banco de dados
	file = fopen(arquivo, "w"); //Cria o arquivo novo na pasta e escrever
	fprintf(file,"\tCPF: "); //Salvando o valor da vari�vel e adcionando informa��o a tela
	fclose(file); //Fecha o arquivo
	
	
	file = fopen(arquivo, "a"); //Adiciona novas informa��es na pasta
	fprintf(file,cpf); //Salvando o valor da vari�vel
	fclose(file); //Fecha o arquivo
	
	file = fopen(arquivo, "a"); //Adiciona novas informa��es na pasta
	fprintf(file,"."); //Salvando o valor da vari�vel e adicionando caracter
	fclose(file); //Fecha o arquivo
	
	
	file = fopen(arquivo, "a"); //Adiciona novas informa��es na pasta
	fprintf(file, "\n"); //Salvando o valor da vari�vel e pulando uma linha
	fclose(file); //Fecha o arquivo
	
	printf(" Digite o Nome a ser cadastrado: "); //Coletando informa��es do usu�rio
	scanf("%s",nome); //Refere-se a strings
	printf("\n"); //Refere-se a pular uma linha
	
	file = fopen(arquivo, "a"); //Adiciona novas informa��es na pasta
	fprintf(file, "\tNome: "); //Salvando o valor da vari�vel e adcionando informa��o a tela
	fclose(file); //Fecha o arquivo
	
	file = fopen(arquivo, "a"); //Adiciona novas informa��es na pasta
	fprintf(file,nome); //Salvando o valor da vari�vel
	fclose(file); //Fecha o arquivo
	
	file = fopen(arquivo, "a"); //Adiciona novas informa��es na pasta
	fprintf(file,"."); //Salvando o valor da vari�vel e adicionando caracter
	fclose(file); //Fecha o arquivo
	
	file = fopen(arquivo, "a"); //Adiciona novas informa��es na pasta
	fprintf(file,"\n"); //Salvando o valor da vari�vel e pulando uma linha
	fclose(file); //Fecha o arquivo
	
	printf(" Digite o Sobrenome a ser cadastrado: "); //Coletando informa��es do usu�rio
	scanf("%s",sobrenome); //Refere-se a strings
	printf("\n"); //Refere-se a pular uma linha
	
	file = fopen(arquivo, "a"); //Adiciona novas informa��es na pasta
	fprintf(file, "\tSobrenome: "); //Salvando o valor da vari�vel e adcionando informa��o a tela
	fclose(file); //Fecha o arquivo
	
	file = fopen(arquivo, "a"); //Adiciona novas informa��es na pasta
	fprintf(file,sobrenome); //Salvando o valor da vari�vel
	fclose(file); //Fecha o arquivo
	
	file = fopen(arquivo, "a"); //Adiciona novas informa��es na pasta
	fprintf(file,"."); //Salvando o valor da vari�vel e adicionando caracter
	fclose(file); //Fecha o arquivo
	
	file = fopen(arquivo, "a"); //Adiciona novas informa��es na pasta
	fprintf(file,"\n"); //Salvando o valor da vari�vel e pulando uma linha
	fclose(file); //Fecha o arquivo
	
	printf(" Digite o Cargo a ser cadastrado: "); //Coletando informa��es do usu�rio
	scanf("%s",cargo); //Refere-se a strings
	printf("\n"); //Refere-se a pular uma linha
	
	file = fopen(arquivo, "a"); //Adiciona novas informa��es na pasta
	fprintf(file, "\tCargo: "); //Salvando o valor da vari�vel e adcionando informa��o a tela
	fclose(file); //Fecha o arquivo
	
	file = fopen(arquivo, "a"); //Adiciona novas informa��es na pasta
	fprintf(file,cargo); //Salvando o valor da vari�vel
	fclose(file); //Fecha o arquivo
	
	file = fopen(arquivo, "a"); //Adiciona novas informa��es na pasta
	fprintf(file,"."); //Salvando o valor da vari�vel e adicionando caracter
	fclose(file); //Fecha o arquivo
	
	system("pause"); //Pausa a sistema
}

int consulta() //Definindo fun��o de consulta
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	//Inicio cria��o de vari�veis/string
	char cpf[40];
	char conteudo[200];
	//Final da cria��o de vari�veis/string
	
	printf(" Digite o CPF a ser consultado: "); //Coletando informa��es do usu�rio
	scanf("%s",cpf); //Refere-se a strings
	printf("\n\n"); //Refere-se a pular uma linha
	
	FILE *file; //Cria o arquivo no banco de dados
	file = fopen(cpf,"r"); //Lendo informa��es contidas na vari�vel
	
	if(file == NULL) //Responsavel por analizar e validar quest�es do usu�rio
	{
		printf(" N�o foi possivel abrir o arquivo, arquivo n�o localizado!. \n"); //Informando ao usu�rio
	}
	
	while(fgets(conteudo, 200, file) != NULL) //Responsavel por analizar e validar quest�es do usu�rio
	{
		printf("%s", conteudo); //Refere-se a strings
		printf("\n"); //Refere-se a pular uma linha
	}
	
	printf("\n\n"); //Refere-se a pular uma linha
	
	system("pause"); //Pausa a sistema
}

int deletar() //Definindo fun��o de deletar
{
	//Inicio cria��o de vari�veis/string
	char cpf[40];
	//Final da cria��o de vari�veis/string
	
	printf(" Digite o CPF a ser deletado: "); //Coletando informa��es do usu�rio
	scanf("%s",cpf); //Refere-se a strings
	printf("\n"); //Refere-se a pular uma linha
	
	remove(cpf); //Fun��o de remover informa��o da vari�vel
	
	FILE *file; //Cria o arquivo no banco de dados
	file = fopen(cpf,"r"); //Lendo informa��es contidas na vari�vel
	
	if(file == NULL) //Responsavel por analizar e validar quest�es do usu�rio
	{
		printf(" O usu�rio n�o se encontra no sistema!. \n"); //Informando ao usu�rio
		printf("\n"); //Refere-se a pular uma linha
		system("pause"); //Pausa a sistema
	}
}

int main() //In�cio do sistema
{
	int opcao=0; //Definindo a vari�vel do projeto
	int laco=1; //Definindo a vari�vel de repeti��o
	char senhadigitada[]="a"; //Definindo variavel da senha
	int comparacao; //Definindo vari�vel de compara��o
	
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	printf("\n\t\t\t\t\tCart�rio de Alunos da EBAC\n\n\n"); //In�cio do login
	printf("\tLogin de administrador!\n\n");
	printf("\tDigite sua senha: "); //Final do login
	scanf("%s",senhadigitada); //Refere-se a strings
	
	comparacao = strcmp(senhadigitada, "admin"); //Compara��o para validdar a senha
	
	if(comparacao == 0) //Inicio da valida��o de senha
	
	{
		
		system("cls"); //Armazenando a escolha o usu�rio
	
		for(laco=1;laco=1;) //In�cio do la�o de repeti��o
		{
	
			setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
			printf("\n\t-- Cart�rio de Alunos da EBAC --\n\n\n"); //Inicio do menu
			printf("\tRegistro de dados dos Alunos associados a Escola EBAC!\n\n\n");
			printf("\tEscolha a op��o desejada do Registro:\n\n"); 
			printf("\t1 - Registrar novos usu�rios.\n\n");
			printf("\t2 - Consultar usu�rios Registrados.\n\n");
			printf("\t3 - Deletar usu�rios Registrados.\n\n");
			printf("\t4 - Sair do sistema.\n\n");
			printf("\tOp��o: "); //Final do menu
	
			scanf("%d", &opcao); //Armazenando a escolha o usu�rio
	
			system("cls"); //Responsavel por limpar a tela do sistema
		
			switch(opcao) //Definindo fun��o de escolha do cliente
			{
				case 1: //In�cio da sess�o
				registro();
				break;
			
				case 2:
				consulta();
				break;
			
				case 3:
				deletar();
				break;
			
				case 4:
				printf(" Obrigado por utilizar o sistema! \n"); //Informando o usu�rio
				return 0; //Finaliza o sistema
				break;
			
				default:
				printf(" Essa op��o n�o est� disponivel, tente outra!\n"); //Informando ao usu�rio
				system("pause"); //Pausa a sistema
				break; //Final da sess�o
			}	
		} //Final do la�o de repeti��o
	} //Final da valida��o de senha
	
	else
	printf("\n\tSenha incorreta!\n\n"); //Resultado incorreto
	
} //Final do sistema

//Inspirado na Aula do Professor Pedro Brocaldi...
