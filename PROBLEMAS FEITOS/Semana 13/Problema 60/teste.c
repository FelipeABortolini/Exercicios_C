#include<stdio.h>

int main(){
	int mat[10] = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109}, i;
	float n1[10] = {8.5, 7.9, 9.8, 5.4, 6.5, 5.8, 8.2, 9.4, 10, 6.8}, n2[10] = {4.5, 3.9, 5.8, 4.4, 9.5, 6.8, 7.2, 2.4, 9.0, 6.8};
	FILE *arq;
	if((arq = fopen("notas.bin", "wb")) == NULL){
		printf("Erro ao abrir o arquivo!");
		return 0;
	}
	for(i=0; i<10; i++){
		fwrite(mat, sizeof(int), 10, arq);
		fwrite(n1, sizeof(float), 10, arq);
		fwrite(n2, sizeof(float), 10, arq);
	}
	fclose(arq);
	return 0;
}
