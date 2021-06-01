/*Escreva um programa em Linguagem C que receba um número inteiro, entre 0 e 10, informado pelo usuário e 
determine quantas vezes este número ocorre em um arquivo binário de inteiros e qual a quantidade total de 
números no arquivo. O nome arquivo é data.bin.

Para que a correção automática funcione, é necessário que o código fonte do seu programa se chame main.c. 
Qualquer outro nome será rejeitado. Ainda, a entrada e a saída do seu programa deve seguir o padrão abaixo:

################ Entrada ##################

printf("Digite um número qualquer.\n");

#########################################

################ Saída ###########################################

O número <num> ocorreu <x> vezes no arquivo de um total de <y> números. 

#################################################################*/

#include<stdio.h>

int main(){
    int num = -1, n = 0, x = 0, y = 0;
    FILE *arq;
    
    if((arq = fopen("data.bin", "rb")) == NULL){
        printf("Erro ao abrir o arquivo!");
        return 0;
    }
    
    while(num > 10 || num < 0){
        printf("Digite um número qualquer.\n");
        scanf("%d", &num);
    }
    
    while(fread(&n, sizeof(n), 1, arq)){
        if(n == num){
            x++;
        }
        y++;
    }
    
    fclose(arq);
    printf("O número %d ocorreu %d vezes no arquivo de um total de %d números.", num, x, y);
    
    return 0;
}
