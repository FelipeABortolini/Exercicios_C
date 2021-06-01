#include<stdio.h>

int main(){
    int i, x;
    FILE *arq;
    
    if((arq = fopen("data.bin", "wb")) == NULL){
        printf("Erro ao abrir o arquivo!");
        return 0;
    }
    for(i=0; i<10; i++){
    	scanf("%d", &x);
    	fwrite(&x, sizeof(x), 1, arq);
	}
    fclose(arq);
    
    return 0;
}
