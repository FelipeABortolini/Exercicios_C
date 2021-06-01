// ITEM R) GERE UM ARQUVO CONTENDO QUANTAS VEZES OS STATUS 1, 2 E 3 NÃO FORAM EXECUTADOS EM SEQUÊNCIA.

//--------------------------------INCLUSÃO DE BIBLIOTECAS--------------------------------
#include <stdio.h>
#include <locale.h>

//----------------------------------------------------FUNÇÃO MAIN----------------------------------------------------
int main(){
	FILE *arq;
	setlocale(LC_ALL, "Portuguese");
	int i = 0, cont = 0, momento = 0, momentoant = 0, duracao = 0, operacao = 0, status = 0, statusant = 0, statusANT = 0, vet_status[3] = {0,0,0}, num = 0, totalSeq = 0;
	char c;
	
	if((arq = fopen("Maq1.log", "r")) == NULL){      // Abre o arquivo de texto e testa se não houve algum erro na abertura.
		printf("Erro ao abrir o arquivo!\n");
	}
	
	while((c = fgetc(arq)) != EOF){       // Enquanto não for o final do arquivo executa este bloco.
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
				totalSeq++;              // Acrescenta uma unidade no total de sequências.
			}
			else {
	    		num++;                   // Acrescenta uma unidade na variável que conta o número de vezes em que os status 1, 2 e 3 não foram executados em sequêcncia.
	    		totalSeq++;              // Acrescenta uma unidade no total de sequências.
	    	}
		}
	}
	
	printf("R) GERE UM ARQUVO CONTENDO QUANTAS VEZES OS STATUS 1, 2 E 3 NÃO FORAM EXECUTADOS EM SEQUÊNCIA.\n");
	printf("Os status 1, 2 e 3 não foram executados em sequêcncia %d vezes de um total de %d possíveis execuções.\n", num, totalSeq);
    	
	return 0;        // Fim do programa informando ao compilador que ocorreu tudo certo na execução.
}
