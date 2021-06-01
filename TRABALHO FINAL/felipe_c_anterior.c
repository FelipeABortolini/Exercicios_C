// ITEM C) QUAL O PERCENTUAL DE CADA MAT�RIA PRIMA CARREGADA NA M�QUINA?

//--------------------------------INCLUS�O DE BIBLIOTECAS--------------------------------
#include <stdio.h>
#include <locale.h>

//-----------------------------------------------DECLARA��O DE FUN��ES-----------------------------------------------
int contagem_linhas();

void formacao_vetores(int n, int fmomento[n], int fduracao[n], int foperacao[n], int fstatus[n]);

void calc_e_mostra_percent(int n_linhas, int vet_operacoes[n_linhas]);

void mostra_vetores(int num_linhas, int mmomento[num_linhas], int mduracao[num_linhas], int moperacao[num_linhas], int mstatus[num_linhas]);

//----------------------------------------------------FUN��O MAIN----------------------------------------------------
int main(){
	int nLinhas = 0;      // Vari�vel que ir� receber o n�mero de linhas do arquivo.
	
	nLinhas = contagem_linhas();       // Chamada da fun��o para contar linhas.
	
	int momento[nLinhas], duracao[nLinhas], operacao[nLinhas], status[nLinhas];        // Cria��o de vetores para armazenar os dados importantes do arquivo.
	
	formacao_vetores(nLinhas, momento, duracao, operacao, status);       // Chamada da fun��o para formar vetores com informa��es.
	
	calc_e_mostra_percent(nLinhas, operacao);       // Chamada da fun��o para calcular o percentual de cada mat�ria prima e imprimir a resposta na tela.
	
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
void calc_e_mostra_percent(int n_linhas, int vet_operacoes[n_linhas]){
	setlocale(LC_ALL, "Portuguese");
	int i = 0, mat_prima[3] = {0,0,0}, total_mat_prima = 0;
	float porcent_mat_prima[3] = {0.0,0.0,0.0};
	
	for(i; i<n_linhas; i++){             // Forma o vetor com o n�mero de vezes em que cada mat�ria prima foi carregada.
		if(vet_operacoes[i] == 1){            // Mat�ria prima 1.
			mat_prima[0]++;
			total_mat_prima++;                     // Acrescenta uma unidade ao total de mat�rias primas.
		}
		if(vet_operacoes[i] == 2){            // Mat�ria prima 2.
			mat_prima[1]++;
			total_mat_prima++;                     // Acrescenta uma unidade ao total de mat�rias primas.
		}
		if(vet_operacoes[i] == 3){            // Mat�ria prima 3.
			mat_prima[2]++;
			total_mat_prima++;                     // Acrescenta uma unidade ao total de mat�rias primas.
		}
	}
	
	printf("C) QUAL O PERCENTUAL DE CADA MAT�RIA PRIMA CARREGADA NA M�QUINA?\n");
	
	for(i=0; i<3; i++){                  // Calcula a porcentagem de cada mat�ria prima e imprime na tela.
		porcent_mat_prima[i] = (mat_prima[i] * 100.0)/total_mat_prima;
		printf("Mat�ria prima %d: %.5f%c\n", i+1, porcent_mat_prima[i], 37);
	}
}

//----------------------------------------FUN��O QUE MOSTRA AS INFORMA��ES DO ARQUIVO DE TEXTO PARA POSS�VEIS CONFER�NCIAS DE RESULTADOS---------------------------------------
void mostra_vetores(int num_linhas, int mmomento[num_linhas], int mduracao[num_linhas], int moperacao[num_linhas], int mstatus[num_linhas]){
	int i = 0;
	
	printf("\nArquivo de texto:\n");
	
	for(i; i<num_linhas; i++){
		printf("%d,%d,%d,%d\n", mmomento[i], mduracao[i], moperacao[i], mstatus[i]);
	}
}
