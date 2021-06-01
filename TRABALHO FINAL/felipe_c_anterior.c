// ITEM C) QUAL O PERCENTUAL DE CADA MATÉRIA PRIMA CARREGADA NA MÁQUINA?

//--------------------------------INCLUSÃO DE BIBLIOTECAS--------------------------------
#include <stdio.h>
#include <locale.h>

//-----------------------------------------------DECLARAÇÃO DE FUNÇÕES-----------------------------------------------
int contagem_linhas();

void formacao_vetores(int n, int fmomento[n], int fduracao[n], int foperacao[n], int fstatus[n]);

void calc_e_mostra_percent(int n_linhas, int vet_operacoes[n_linhas]);

void mostra_vetores(int num_linhas, int mmomento[num_linhas], int mduracao[num_linhas], int moperacao[num_linhas], int mstatus[num_linhas]);

//----------------------------------------------------FUNÇÃO MAIN----------------------------------------------------
int main(){
	int nLinhas = 0;      // Variável que irá receber o número de linhas do arquivo.
	
	nLinhas = contagem_linhas();       // Chamada da função para contar linhas.
	
	int momento[nLinhas], duracao[nLinhas], operacao[nLinhas], status[nLinhas];        // Criação de vetores para armazenar os dados importantes do arquivo.
	
	formacao_vetores(nLinhas, momento, duracao, operacao, status);       // Chamada da função para formar vetores com informações.
	
	calc_e_mostra_percent(nLinhas, operacao);       // Chamada da função para calcular o percentual de cada matéria prima e imprimir a resposta na tela.
	
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
void calc_e_mostra_percent(int n_linhas, int vet_operacoes[n_linhas]){
	setlocale(LC_ALL, "Portuguese");
	int i = 0, mat_prima[3] = {0,0,0}, total_mat_prima = 0;
	float porcent_mat_prima[3] = {0.0,0.0,0.0};
	
	for(i; i<n_linhas; i++){             // Forma o vetor com o número de vezes em que cada matéria prima foi carregada.
		if(vet_operacoes[i] == 1){            // Matéria prima 1.
			mat_prima[0]++;
			total_mat_prima++;                     // Acrescenta uma unidade ao total de matérias primas.
		}
		if(vet_operacoes[i] == 2){            // Matéria prima 2.
			mat_prima[1]++;
			total_mat_prima++;                     // Acrescenta uma unidade ao total de matérias primas.
		}
		if(vet_operacoes[i] == 3){            // Matéria prima 3.
			mat_prima[2]++;
			total_mat_prima++;                     // Acrescenta uma unidade ao total de matérias primas.
		}
	}
	
	printf("C) QUAL O PERCENTUAL DE CADA MATÉRIA PRIMA CARREGADA NA MÁQUINA?\n");
	
	for(i=0; i<3; i++){                  // Calcula a porcentagem de cada matéria prima e imprime na tela.
		porcent_mat_prima[i] = (mat_prima[i] * 100.0)/total_mat_prima;
		printf("Matéria prima %d: %.5f%c\n", i+1, porcent_mat_prima[i], 37);
	}
}

//----------------------------------------FUNÇÃO QUE MOSTRA AS INFORMAÇÕES DO ARQUIVO DE TEXTO PARA POSSÍVEIS CONFERÊNCIAS DE RESULTADOS---------------------------------------
void mostra_vetores(int num_linhas, int mmomento[num_linhas], int mduracao[num_linhas], int moperacao[num_linhas], int mstatus[num_linhas]){
	int i = 0;
	
	printf("\nArquivo de texto:\n");
	
	for(i; i<num_linhas; i++){
		printf("%d,%d,%d,%d\n", mmomento[i], mduracao[i], moperacao[i], mstatus[i]);
	}
}
