#include <stdio.h>  //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsavel por cuidar das strings

int registro() //Função responsavel por cadastrar os usuários no sistema
{
	//Inicio criação de variáveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//Final da criação de variáveis/string
	
	printf(" Digite o CPF a ser cadastrado: "); //Coletando informações do usuário
	scanf("%s",cpf); //Refere-se a strings
	strcpy(arquivo,cpf); //Responsavel por copiar os valores das string
	printf("\n"); //Refere-se a pular uma linha
	
	FILE *file; //Cria o arquivo no banco de dados
	file = fopen(arquivo, "w"); //Cria o arquivo novo na pasta e escrever
	fprintf(file,"\tCPF: "); //Salvando o valor da variável e adcionando informação a tela
	fclose(file); //Fecha o arquivo
	
	
	file = fopen(arquivo, "a"); //Adiciona novas informações na pasta
	fprintf(file,cpf); //Salvando o valor da variável
	fclose(file); //Fecha o arquivo
	
	file = fopen(arquivo, "a"); //Adiciona novas informações na pasta
	fprintf(file,"."); //Salvando o valor da variável e adicionando caracter
	fclose(file); //Fecha o arquivo
	
	
	file = fopen(arquivo, "a"); //Adiciona novas informações na pasta
	fprintf(file, "\n"); //Salvando o valor da variável e pulando uma linha
	fclose(file); //Fecha o arquivo
	
	printf(" Digite o Nome a ser cadastrado: "); //Coletando informações do usuário
	scanf("%s",nome); //Refere-se a strings
	printf("\n"); //Refere-se a pular uma linha
	
	file = fopen(arquivo, "a"); //Adiciona novas informações na pasta
	fprintf(file, "\tNome: "); //Salvando o valor da variável e adcionando informação a tela
	fclose(file); //Fecha o arquivo
	
	file = fopen(arquivo, "a"); //Adiciona novas informações na pasta
	fprintf(file,nome); //Salvando o valor da variável
	fclose(file); //Fecha o arquivo
	
	file = fopen(arquivo, "a"); //Adiciona novas informações na pasta
	fprintf(file,"."); //Salvando o valor da variável e adicionando caracter
	fclose(file); //Fecha o arquivo
	
	file = fopen(arquivo, "a"); //Adiciona novas informações na pasta
	fprintf(file,"\n"); //Salvando o valor da variável e pulando uma linha
	fclose(file); //Fecha o arquivo
	
	printf(" Digite o Sobrenome a ser cadastrado: "); //Coletando informações do usuário
	scanf("%s",sobrenome); //Refere-se a strings
	printf("\n"); //Refere-se a pular uma linha
	
	file = fopen(arquivo, "a"); //Adiciona novas informações na pasta
	fprintf(file, "\tSobrenome: "); //Salvando o valor da variável e adcionando informação a tela
	fclose(file); //Fecha o arquivo
	
	file = fopen(arquivo, "a"); //Adiciona novas informações na pasta
	fprintf(file,sobrenome); //Salvando o valor da variável
	fclose(file); //Fecha o arquivo
	
	file = fopen(arquivo, "a"); //Adiciona novas informações na pasta
	fprintf(file,"."); //Salvando o valor da variável e adicionando caracter
	fclose(file); //Fecha o arquivo
	
	file = fopen(arquivo, "a"); //Adiciona novas informações na pasta
	fprintf(file,"\n"); //Salvando o valor da variável e pulando uma linha
	fclose(file); //Fecha o arquivo
	
	printf(" Digite o Cargo a ser cadastrado: "); //Coletando informações do usuário
	scanf("%s",cargo); //Refere-se a strings
	printf("\n"); //Refere-se a pular uma linha
	
	file = fopen(arquivo, "a"); //Adiciona novas informações na pasta
	fprintf(file, "\tCargo: "); //Salvando o valor da variável e adcionando informação a tela
	fclose(file); //Fecha o arquivo
	
	file = fopen(arquivo, "a"); //Adiciona novas informações na pasta
	fprintf(file,cargo); //Salvando o valor da variável
	fclose(file); //Fecha o arquivo
	
	file = fopen(arquivo, "a"); //Adiciona novas informações na pasta
	fprintf(file,"."); //Salvando o valor da variável e adicionando caracter
	fclose(file); //Fecha o arquivo
	
	system("pause"); //Pausa a sistema
}

int consulta() //Definindo função de consulta
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	//Inicio criação de variáveis/string
	char cpf[40];
	char conteudo[200];
	//Final da criação de variáveis/string
	
	printf(" Digite o CPF a ser consultado: "); //Coletando informações do usuário
	scanf("%s",cpf); //Refere-se a strings
	printf("\n\n"); //Refere-se a pular uma linha
	
	FILE *file; //Cria o arquivo no banco de dados
	file = fopen(cpf,"r"); //Lendo informações contidas na variável
	
	if(file == NULL) //Responsavel por analizar e validar questões do usuário
	{
		printf(" Não foi possivel abrir o arquivo, arquivo não localizado!. \n"); //Informando ao usuário
	}
	
	while(fgets(conteudo, 200, file) != NULL) //Responsavel por analizar e validar questões do usuário
	{
		printf("%s", conteudo); //Refere-se a strings
		printf("\n"); //Refere-se a pular uma linha
	}
	
	printf("\n\n"); //Refere-se a pular uma linha
	
	system("pause"); //Pausa a sistema
}

int deletar() //Definindo função de deletar
{
	//Inicio criação de variáveis/string
	char cpf[40];
	//Final da criação de variáveis/string
	
	printf(" Digite o CPF a ser deletado: "); //Coletando informações do usuário
	scanf("%s",cpf); //Refere-se a strings
	printf("\n"); //Refere-se a pular uma linha
	
	remove(cpf); //Função de remover informação da variável
	
	FILE *file; //Cria o arquivo no banco de dados
	file = fopen(cpf,"r"); //Lendo informações contidas na variável
	
	if(file == NULL) //Responsavel por analizar e validar questões do usuário
	{
		printf(" O usuário não se encontra no sistema!. \n"); //Informando ao usuário
		printf("\n"); //Refere-se a pular uma linha
		system("pause"); //Pausa a sistema
	}
}

int main() //Início do sistema
{
	int opcao=0; //Definindo a variável do projeto
	int laco=1; //Definindo a variável de repetição
	char senhadigitada[]="a"; //Definindo variavel da senha
	int comparacao; //Definindo variável de comparação
	
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	printf("\n\t\t\t\t\tCartório de Alunos da EBAC\n\n\n"); //Início do login
	printf("\tLogin de administrador!\n\n");
	printf("\tDigite sua senha: "); //Final do login
	scanf("%s",senhadigitada); //Refere-se a strings
	
	comparacao = strcmp(senhadigitada, "admin"); //Comparação para validdar a senha
	
	if(comparacao == 0) //Inicio da validação de senha
	
	{
		
		system("cls"); //Armazenando a escolha o usuário
	
		for(laco=1;laco=1;) //Início do laço de repetição
		{
	
			setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
			printf("\n\t-- Cartório de Alunos da EBAC --\n\n\n"); //Inicio do menu
			printf("\tRegistro de dados dos Alunos associados a Escola EBAC!\n\n\n");
			printf("\tEscolha a opção desejada do Registro:\n\n"); 
			printf("\t1 - Registrar novos usuários.\n\n");
			printf("\t2 - Consultar usuários Registrados.\n\n");
			printf("\t3 - Deletar usuários Registrados.\n\n");
			printf("\t4 - Sair do sistema.\n\n");
			printf("\tOpção: "); //Final do menu
	
			scanf("%d", &opcao); //Armazenando a escolha o usuário
	
			system("cls"); //Responsavel por limpar a tela do sistema
		
			switch(opcao) //Definindo função de escolha do cliente
			{
				case 1: //Início da sessão
				registro();
				break;
			
				case 2:
				consulta();
				break;
			
				case 3:
				deletar();
				break;
			
				case 4:
				printf(" Obrigado por utilizar o sistema! \n"); //Informando o usuário
				return 0; //Finaliza o sistema
				break;
			
				default:
				printf(" Essa opção não está disponivel, tente outra!\n"); //Informando ao usuário
				system("pause"); //Pausa a sistema
				break; //Final da sessão
			}	
		} //Final do laço de repetição
	} //Final da validação de senha
	
	else
	printf("\n\tSenha incorreta!\n\n"); //Resultado incorreto
	
} //Final do sistema

//Inspirado na Aula do Professor Pedro Brocaldi...
