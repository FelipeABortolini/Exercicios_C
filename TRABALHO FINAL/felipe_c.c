// ITEM C) QUAL O PERCENTUAL DE CADA MAT�RIA PRIMA CARREGADA NA M�QUINA?

//--------------------------------INCLUS�O DE BIBLIOTECAS--------------------------------
#include <stdio.h>
#include <locale.h>

//-----------------------------------------------DECLARA��O DE FUN��ES-----------------------------------------------
void calc_imprime_mensagem();

//-----------------------------------------------DECLARA��O DE VARI�VEIS GLOBAIS-----------------------------------------------
float porcent_mat_prima[3] = {0.0,0.0,0.0};
int i = 0, mat_prima[3] = {0,0,0}, total_mat_prima = 0;

//----------------------------------------------------FUN��O MAIN----------------------------------------------------
int main(){
	FILE *arq;
	setlocale(LC_ALL, "Portuguese");
	int momento = 0, momentoant = 0, duracao = 0, operacao = 0, status = 0;
	char c;
	
	if((arq = fopen("Maq1.log", "r")) == NULL){      // Abre o arquivo de texto e testa se n�o houve algum erro na abertura.
		printf("Erro ao abrir o arquivo!\n");
	}
	
	while((c = fgetc(arq)) != EOF){       // Enquanto n�o for o final do arquivo executa este bloco.
		momentoant = momento;
		fscanf(arq, "%d,%d,%d,%d", &momento, &duracao, &operacao, &status);
    	if(momentoant != momento){
    		//printf("%d\n", operacao);
		    if(operacao == 1){            // Mat�ria prima 1.
	    		mat_prima[0]++;
	    		total_mat_prima++;                     // Acrescenta uma unidade ao total de mat�rias primas.
	    	}
	    	if(operacao == 2){            // Mat�ria prima 2.
	    		mat_prima[1]++;
	     		total_mat_prima++;                     // Acrescenta uma unidade ao total de mat�rias primas.
	    	}
	    	if(operacao == 3){            // Mat�ria prima 3.
	    		mat_prima[2]++;
	    		total_mat_prima++;                     // Acrescenta uma unidade ao total de mat�rias primas.
	    	}
	    }
	}
	fclose(arq);
	calc_imprime_mensagem();
	return 0;        // Fim do programa informando ao compilador que ocorreu tudo certo na execu��o.
}

void calc_imprime_mensagem(){
	printf("C) QUAL O PERCENTUAL DE CADA MAT�RIA PRIMA CARREGADA NA M�QUINA?\n");
	
	for(i=0; i<3; i++){                  // Calcula a porcentagem de cada mat�ria prima e imprime na tela.
		porcent_mat_prima[i] = (mat_prima[i] * 100.0)/total_mat_prima;
		printf("Mat�ria prima %d: %.5f%c\n", i+1, porcent_mat_prima[i], 37);
	}
}
