/*Escreva um programa em linguagem C capaz de ler as notas de 2 provas de 10 alunos a partir de um arquivo bin�rio e exibir a m�dia de cada aluno. O 
arquivo se chama notas.bin. As informa��es est�o dispostas no arquivo de entrada da seguinte maneira:

Os primeiros 10 valores, s�o n�meros inteiros e correspondem aos c�digos de matr�cula dos alunos.
Os pr�ximos 10 valores s�o do tipo float e correspondem as notas da primeira prova. As notas est�o dispostas na mesma ordem dos n�meros de matr�cula. 
Os pr�ximos 10 valores s�o do tipo float e correspondem as notas da segunda prova. As notas est�o dispostas na mesma ordem dos n�meros de matr�cula. 
Para que a corre��o autom�tica funcione, � necess�rio que o c�digo fonte do seu programa se chame main.c. Qualquer outro nome ser� rejeitado. Ainda, 
sa�da do seu programa deve seguir o padr�o abaixo:

################ Sa�da ###########################################

<n�mero matricula>: <m�dia>

<n�mero matricula>: <m�dia>

<n�mero matricula>: <m�dia>

<n�mero matricula>: <m�dia>

...

#################################################################

Obs.: A media deve ser exibida com duas casas ap�s a v�rgula.

Dica: Carregue os valores dos n�meros de matr�cula, nota da prova 1 e nota da prova 2 para vetores de 10 elementos cada.*/

#include<stdio.h>
#define tamanho 10

int main(){
	int mat[tamanho], i;
	float n1[tamanho], n2[tamanho], media[tamanho];
	FILE *arq;
	if((arq = fopen("notas.bin", "rb")) == NULL){
		printf("Erro ao abrir o arquivo!");
		return 0;
	}
	for(i=0; i<tamanho; i++){
		fread(&mat, sizeof(int), tamanho, arq);
		fread(&n1, sizeof(float), tamanho, arq);
		fread(&n2, sizeof(float), tamanho, arq);
		media[i] = (n1[i]+n2[i])/2;
		printf("%d: %.2f\n", mat[i], media[i]);
	}
	fclose(arq);
	return 0;
}
