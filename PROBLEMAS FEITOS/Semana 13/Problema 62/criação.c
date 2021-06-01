#include<stdio.h>

int main(){
	FILE *arq;
	int x, i;
	if((arq = fopen("data.bin", "wb")) == NULL){
		printf("Erro ao abrir o arquivo!");
		return 0;
	}
	for(i=0; i<10; i++){
		scanf("%d", &x);
		fwrite(&x, sizeof(int), 1, arq);
	}
	fclose(arq);
	return 0;
}
