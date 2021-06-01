// ITEM R) GERE UM ARQUVO CONTENDO QUANTAS VEZES OS STATUS 1, 2 E 3 NÃO FORAM EXECUTADOS EM SEQUÊNCIA.

//--------------------------------INCLUSÃO DE BIBLIOTECAS--------------------------------
#include <stdio.h>
#include <locale.h>

//-----------------------------------------------DECLARAÇÃO DE FUNÇÕES-----------------------------------------------
int contagem_linhas();

void formacao_vetores(int n, int fmomento[n], int fduracao[n], int foperacao[n], int fstatus[n]);

void seq_status(int numLinhas, int vet_status[numLinhas]);

void mostra_vetores(int num_linhas, int mmomento[num_linhas], int mduracao[num_linhas], int moperacao[num_linhas], int mstatus[num_linhas]);

//----------------------------------------------------FUNÇÃO MAIN----------------------------------------------------
int main(){
	int nLinhas = 0;      // Variável que irá receber o número de linhas do arquivo.
	
	nLinhas = contagem_linhas();       // Chamada da função para contar linhas.
	
	int momento[nLinhas], duracao[nLinhas], operacao[nLinhas], status[nLinhas];        // Criação de vetores para armazenar os dados importantes do arquivo.
	
	formacao_vetores(nLinhas, momento, duracao, operacao, status);       // Chamada da função para formar vetores com informações.
	
	seq_status(nLinhas, status);       // Chamada da função para contar sequência do status e mostrar quantas vezes os status 1, 2 e 3 não foram executados em sequência e imprimir a resposta na tela.
	
	//mostra_vetores(nLinhas, momento, duracao, operacao, status);  //=========> Mostra o arquivo de texto para possíveis conferências de resultados.
	
	return 0;        // Fim do programa informando ao compilador que ocorreu tudo certo na execução.
}

//----------------------------------------FUNÇÃO QUE CONTA O NÚMERO DE LINHAS DO ARQUIVO---------------------------------------
int contagem_linhas(){  
	FILE *arq;
	char c;
	int Linhas = 0, i = 0;
	
	if((arq = fopen("Maq1.log", "r")) == NULL){      // Abre o arquivo de texto e testa se não houve algum erro na abertura.
		printf("Erro ao abrir o arquivo!\n");
		return 0;
	}
	
	while((c = fgetc(arq)) != EOF){       // Enquanto não for o final do arquivo executa este bloco.
		if(c == '\n'){                         // Se o caractere for '\n' acrescenta uma unidade na variável "Linhas".
			Linhas++;
		}
	}
	
	fclose(arq);     // Fecha o arquivo de texto.
	
	return Linhas;
}

//----------------------------------------FUNÇÃO QUE FORMA OS VETORES COM INFORMAÇÕES CONTIDAS NO ARQUIVO---------------------------------------
void formacao_vetores(int n, int fmomento[n], int fduracao[n], int foperacao[n], int fstatus[n]){
	FILE *arq;
	char lixo;         // Variável para ignorar vírgulas, '\n' e '\0' durante a leitura do arquivo de texto.
	int i = 0;
	
	if((arq = fopen("Maq1.log", "r")) == NULL){      // Abre o arquivo de texto e testa se não houve algum erro na abertura.
		printf("Erro ao abrir o arquivo!\n");
	}
	
	for(i; i<n; i++){
		fscanf(arq, "%d", &fmomento[i]);
		lixo = fgetc(arq);                 // Lixo = vírgulas, '\n' e '\0'.
		
		fscanf(arq, "%d", &fduracao[i]);
		lixo = fgetc(arq);                 // Lixo = vírgulas, '\n' e '\0'.
		
		fscanf(arq, "%d", &foperacao[i]);
		lixo = fgetc(arq);                 // Lixo = vírgulas, '\n' e '\0'.
		
		fscanf(arq, "%d", &fstatus[i]);
		lixo = fgetc(arq);                 // Lixo = vírgulas, '\n' e '\0'.
	}
	
	fclose(arq);     // Fecha o arquivo de texto.
}

//----------------------------------------FUNÇÃO QUE REALIZA O CÁLCULO DESEJADO E IMPRIME O RESULTADO NA TELA---------------------------------------
void seq_status(int numLinhas, int vet_status[numLinhas]){
	setlocale(LC_ALL, "Portuguese");
	int i = 0, num = 0, totalSeq = 0;
	
	for(i; i<numLinhas-2; i++){          // Laço 'for' que percorre todas as sequências com 3 status informados no arquivo.
		//printf("%d %d %d\n", status[i], status[i+1], status[i+2]);       // Imprime as sequênicas de status na tela para possíveis conferências.
		if((vet_status[i] == 1) && (vet_status[i+1] == 2) && (vet_status[i+2] == 3)){   // Se a sequência analisada no momento não for 1, 2 e 3 acrescenta uma unidade na variável "num".
		    totalSeq++;              // Acrescenta uma unidade no total de sequências.
		}
		else {
			num++;                   // Acrescenta uma unidade na variável que conta o número de vezes em que os status 1, 2 e 3 não foram executados em sequêcncia.
			totalSeq++;              // Acrescenta uma unidade no total de sequências.
		}
	}
	
	printf("R) GERE UM ARQUVO CONTENDO QUANTAS VEZES OS STATUS 1, 2 E 3 NÃO FORAM EXECUTADOS EM SEQUÊNCIA.\n");
	printf("Os status 1, 2 e 3 não foram executados em sequêcncia %d vezes de um total de %d possíveis execuções.\n", num, totalSeq);
}

//----------------------------------------FUNÇÃO QUE MOSTRA AS INFORMAÇÕES DO ARQUIVO DE TEXTO PARA POSSÍVEIS CONFERÊNCIAS DE RESULTADOS---------------------------------------
void mostra_vetores(int num_linhas, int mmomento[num_linhas], int mduracao[num_linhas], int moperacao[num_linhas], int mstatus[num_linhas]){
	int i = 0;
	
	printf("\nArquivo de texto:\n");
	
	for(i; i<num_linhas; i++){
		printf("%d,%d,%d,%d\n", mmomento[i], mduracao[i], moperacao[i], mstatus[i]);
	}
}
