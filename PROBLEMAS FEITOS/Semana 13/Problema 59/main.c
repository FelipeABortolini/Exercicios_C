/*Escreva um programa em Linguagem C que receba um n�mero inteiro, entre 0 e 10, informado pelo usu�rio e 
determine quantas vezes este n�mero ocorre em um arquivo bin�rio de inteiros e qual a quantidade total de 
n�meros no arquivo. O nome arquivo � data.bin.

Para que a corre��o autom�tica funcione, � necess�rio que o c�digo fonte do seu programa se chame main.c. 
Qualquer outro nome ser� rejeitado. Ainda, a entrada e a sa�da do seu programa deve seguir o padr�o abaixo:

################ Entrada ##################

printf("Digite um n�mero qualquer.\n");

#########################################

################ Sa�da ###########################################

O n�mero <num> ocorreu <x> vezes no arquivo de um total de <y> n�meros. 

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
        printf("Digite um n�mero qualquer.\n");
        scanf("%d", &num);
    }
    
    while(fread(&n, sizeof(n), 1, arq)){
        if(n == num){
            x++;
        }
        y++;
    }
    
    fclose(arq);
    printf("O n�mero %d ocorreu %d vezes no arquivo de um total de %d n�meros.", num, x, y);
    
    return 0;
}
