// ITEM R) GERE UM ARQUVO CONTENDO QUANTAS VEZES OS STATUS 1, 2 E 3 N�O FORAM EXECUTADOS EM SEQU�NCIA.

//--------------------------------INCLUS�O DE BIBLIOTECAS--------------------------------
#include <stdio.h>
#include <locale.h>

//----------------------------------------------------FUN��O MAIN----------------------------------------------------
int main(){
	FILE *arq;
	setlocale(LC_ALL, "Portuguese");
	int i = 0, cont = 0, momento = 0, momentoant = 0, duracao = 0, operacao = 0, status = 0, statusant = 0, statusANT = 0, vet_status[3] = {0,0,0}, num = 0, totalSeq = 0;
	char c;
	
	if((arq = fopen("Maq1.log", "r")) == NULL){      // Abre o arquivo de texto e testa se n�o houve algum erro na abertura.
		printf("Erro ao abrir o arquivo!\n");
	}
	
	while((c = fgetc(arq)) != EOF){       // Enquanto n�o for o final do arquivo executa este bloco.
		momentoant = momento;
		statusANT = statusant;
		statusant = status;
		
		fscanf(arq, "%d,%d,%d,%d", &momento, &duracao, &operacao, &status);
		cont++;
		
		vet_status[0] = statusANT;
		vet_status[1] = statusant;
		vet_status[2] = status;
		
    	if(momentoant != momento && cont>=3){
			if(vet_status[0] == 1 && vet_status[1] == 2 && vet_status[2] == 3){
				totalSeq++;              // Acrescenta uma unidade no total de sequ�ncias.
			}
			else {
	    		num++;                   // Acrescenta uma unidade na vari�vel que conta o n�mero de vezes em que os status 1, 2 e 3 n�o foram executados em sequ�cncia.
	    		totalSeq++;              // Acrescenta uma unidade no total de sequ�ncias.
	    	}
		}
	}
	
	printf("R) GERE UM ARQUVO CONTENDO QUANTAS VEZES OS STATUS 1, 2 E 3 N�O FORAM EXECUTADOS EM SEQU�NCIA.\n");
	printf("Os status 1, 2 e 3 n�o foram executados em sequ�cncia %d vezes de um total de %d poss�veis execu��es.\n", num, totalSeq);
    	
	return 0;        // Fim do programa informando ao compilador que ocorreu tudo certo na execu��o.
}
