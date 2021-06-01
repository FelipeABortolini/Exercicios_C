#include<stdio.h>

int main(){
	FILE *arq;
	int x, i;
	if((arq = fopen("entrada.bin", "wb")) == NULL){
		printf("Erro ao abrir o arquivo!");
		return 0;
	}
	for(i=1; i<16; i++){
		fwrite(&i, sizeof(int), 1, arq);
	}
	fclose(arq);
	return 0;
}
