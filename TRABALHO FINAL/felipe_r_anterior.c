// ITEM R) GERE UM ARQUVO CONTENDO QUANTAS VEZES OS STATUS 1, 2 E 3 N�O FORAM EXECUTADOS EM SEQU�NCIA.

//--------------------------------INCLUS�O DE BIBLIOTECAS--------------------------------
#include <stdio.h>
#include <locale.h>

//-----------------------------------------------DECLARA��O DE FUN��ES-----------------------------------------------
int contagem_linhas();

void formacao_vetores(int n, int fmomento[n], int fduracao[n], int foperacao[n], int fstatus[n]);

void seq_status(int numLinhas, int vet_status[numLinhas]);

void mostra_vetores(int num_linhas, int mmomento[num_linhas], int mduracao[num_linhas], int moperacao[num_linhas], int mstatus[num_linhas]);

//----------------------------------------------------FUN��O MAIN----------------------------------------------------
int main(){
	int nLinhas = 0;      // Vari�vel que ir� receber o n�mero de linhas do arquivo.
	
	nLinhas = contagem_linhas();       // Chamada da fun��o para contar linhas.
	
	int momento[nLinhas], duracao[nLinhas], operacao[nLinhas], status[nLinhas];        // Cria��o de vetores para armazenar os dados importantes do arquivo.
	
	formacao_vetores(nLinhas, momento, duracao, operacao, status);       // Chamada da fun��o para formar vetores com informa��es.
	
	seq_status(nLinhas, status);       // Chamada da fun��o para contar sequ�ncia do status e mostrar quantas vezes os status 1, 2 e 3 n�o foram executados em sequ�ncia e imprimir a resposta na tela.
	
	//mostra_vetores(nLinhas, momento, duracao, operacao, status);  //=========> Mostra o arquivo de texto para poss�veis confer�ncias de resultados.
	
	return 0;        // Fim do programa informando ao compilador que ocorreu tudo certo na execu��o.
}

//----------------------------------------FUN��O QUE CONTA O N�MERO DE LINHAS DO ARQUIVO---------------------------------------
int contagem_linhas(){  
	FILE *arq;
	char c;
	int Linhas = 0, i = 0;
	
	if((arq = fopen("Maq1.log", "r")) == NULL){      // Abre o arquivo de texto e testa se n�o houve algum erro na abertura.
		printf("Erro ao abrir o arquivo!\n");
		return 0;
	}
	
	while((c = fgetc(arq)) != EOF){       // Enquanto n�o for o final do arquivo executa este bloco.
		if(c == '\n'){                         // Se o caractere for '\n' acrescenta uma unidade na vari�vel "Linhas".
			Linhas++;
		}
	}
	
	fclose(arq);     // Fecha o arquivo de texto.
	
	return Linhas;
}

//----------------------------------------FUN��O QUE FORMA OS VETORES COM INFORMA��ES CONTIDAS NO ARQUIVO---------------------------------------
void formacao_vetores(int n, int fmomento[n], int fduracao[n], int foperacao[n], int fstatus[n]){
	FILE *arq;
	char lixo;         // Vari�vel para ignorar v�rgulas, '\n' e '\0' durante a leitura do arquivo de texto.
	int i = 0;
	
	if((arq = fopen("Maq1.log", "r")) == NULL){      // Abre o arquivo de texto e testa se n�o houve algum erro na abertura.
		printf("Erro ao abrir o arquivo!\n");
	}
	
	for(i; i<n; i++){
		fscanf(arq, "%d", &fmomento[i]);
		lixo = fgetc(arq);                 // Lixo = v�rgulas, '\n' e '\0'.
		
		fscanf(arq, "%d", &fduracao[i]);
		lixo = fgetc(arq);                 // Lixo = v�rgulas, '\n' e '\0'.
		
		fscanf(arq, "%d", &foperacao[i]);
		lixo = fgetc(arq);                 // Lixo = v�rgulas, '\n' e '\0'.
		
		fscanf(arq, "%d", &fstatus[i]);
		lixo = fgetc(arq);                 // Lixo = v�rgulas, '\n' e '\0'.
	}
	
	fclose(arq);     // Fecha o arquivo de texto.
}

//----------------------------------------FUN��O QUE REALIZA O C�LCULO DESEJADO E IMPRIME O RESULTADO NA TELA---------------------------------------
void seq_status(int numLinhas, int vet_status[numLinhas]){
	setlocale(LC_ALL, "Portuguese");
	int i = 0, num = 0, totalSeq = 0;
	
	for(i; i<numLinhas-2; i++){          // La�o 'for' que percorre todas as sequ�ncias com 3 status informados no arquivo.
		//printf("%d %d %d\n", status[i], status[i+1], status[i+2]);       // Imprime as sequ�nicas de status na tela para poss�veis confer�ncias.
		if((vet_status[i] == 1) && (vet_status[i+1] == 2) && (vet_status[i+2] == 3)){   // Se a sequ�ncia analisada no momento n�o for 1, 2 e 3 acrescenta uma unidade na vari�vel "num".
		    totalSeq++;              // Acrescenta uma unidade no total de sequ�ncias.
		}
		else {
			num++;                   // Acrescenta uma unidade na vari�vel que conta o n�mero de vezes em que os status 1, 2 e 3 n�o foram executados em sequ�cncia.
			totalSeq++;              // Acrescenta uma unidade no total de sequ�ncias.
		}
	}
	
	printf("R) GERE UM ARQUVO CONTENDO QUANTAS VEZES OS STATUS 1, 2 E 3 N�O FORAM EXECUTADOS EM SEQU�NCIA.\n");
	printf("Os status 1, 2 e 3 n�o foram executados em sequ�cncia %d vezes de um total de %d poss�veis execu��es.\n", num, totalSeq);
}

//----------------------------------------FUN��O QUE MOSTRA AS INFORMA��ES DO ARQUIVO DE TEXTO PARA POSS�VEIS CONFER�NCIAS DE RESULTADOS---------------------------------------
void mostra_vetores(int num_linhas, int mmomento[num_linhas], int mduracao[num_linhas], int moperacao[num_linhas], int mstatus[num_linhas]){
	int i = 0;
	
	printf("\nArquivo de texto:\n");
	
	for(i; i<num_linhas; i++){
		printf("%d,%d,%d,%d\n", mmomento[i], mduracao[i], moperacao[i], mstatus[i]);
	}
}
