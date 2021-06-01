#include<stdio.h>

int main(){
	FILE*arq1;
	FILE*arq2;
	int x1, x2;
	if((arq1=fopen("entrada.bin", "rb")) == NULL){
		printf("Erro ao abrir o arquivo!\n");
		return 0;
	}
	if((arq2=fopen("saida.bin", "rb")) == NULL){
		printf("Erro ao abrir o arquivo!\n");
		return 0;
	}
	while(fread(&x1, sizeof(int), 1, arq1)){
		printf("%d\n", x1);
	}
	printf("\n");
	while(fread(&x2, sizeof(int), 1, arq2)){
		printf("%d\n", x2);
	}
	
	return 0;
}

