// ITEM C) QUAL O PERCENTUAL DE CADA MATÉRIA PRIMA CARREGADA NA MÁQUINA?

//--------------------------------INCLUSÃO DE BIBLIOTECAS--------------------------------
#include <stdio.h>
#include <locale.h>

//-----------------------------------------------DECLARAÇÃO DE FUNÇÕES-----------------------------------------------
void calc_imprime_mensagem();

//-----------------------------------------------DECLARAÇÃO DE VARIÁVEIS GLOBAIS-----------------------------------------------
float porcent_mat_prima[3] = {0.0,0.0,0.0};
int i = 0, mat_prima[3] = {0,0,0}, total_mat_prima = 0;

//----------------------------------------------------FUNÇÃO MAIN----------------------------------------------------
int main(){
	FILE *arq;
	setlocale(LC_ALL, "Portuguese");
	int momento = 0, momentoant = 0, duracao = 0, operacao = 0, status = 0;
	char c;
	
	if((arq = fopen("Maq1.log", "r")) == NULL){      // Abre o arquivo de texto e testa se não houve algum erro na abertura.
		printf("Erro ao abrir o arquivo!\n");
	}
	
	while((c = fgetc(arq)) != EOF){       // Enquanto não for o final do arquivo executa este bloco.
		momentoant = momento;
		fscanf(arq, "%d,%d,%d,%d", &momento, &duracao, &operacao, &status);
    	if(momentoant != momento){
    		//printf("%d\n", operacao);
		    if(operacao == 1){            // Matéria prima 1.
	    		mat_prima[0]++;
	    		total_mat_prima++;                     // Acrescenta uma unidade ao total de matérias primas.
	    	}
	    	if(operacao == 2){            // Matéria prima 2.
	    		mat_prima[1]++;
	     		total_mat_prima++;                     // Acrescenta uma unidade ao total de matérias primas.
	    	}
	    	if(operacao == 3){            // Matéria prima 3.
	    		mat_prima[2]++;
	    		total_mat_prima++;                     // Acrescenta uma unidade ao total de matérias primas.
	    	}
	    }
	}
	fclose(arq);
	calc_imprime_mensagem();
	return 0;        // Fim do programa informando ao compilador que ocorreu tudo certo na execução.
}

void calc_imprime_mensagem(){
	printf("C) QUAL O PERCENTUAL DE CADA MATÉRIA PRIMA CARREGADA NA MÁQUINA?\n");
	
	for(i=0; i<3; i++){                  // Calcula a porcentagem de cada matéria prima e imprime na tela.
		porcent_mat_prima[i] = (mat_prima[i] * 100.0)/total_mat_prima;
		printf("Matéria prima %d: %.5f%c\n", i+1, porcent_mat_prima[i], 37);
	}
}
