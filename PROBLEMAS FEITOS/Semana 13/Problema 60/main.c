/*Escreva um programa em linguagem C capaz de ler as notas de 2 provas de 10 alunos a partir de um arquivo binário e exibir a média de cada aluno. O 
arquivo se chama notas.bin. As informações estão dispostas no arquivo de entrada da seguinte maneira:

Os primeiros 10 valores, são números inteiros e correspondem aos códigos de matrícula dos alunos.
Os próximos 10 valores são do tipo float e correspondem as notas da primeira prova. As notas estão dispostas na mesma ordem dos números de matrícula. 
Os próximos 10 valores são do tipo float e correspondem as notas da segunda prova. As notas estão dispostas na mesma ordem dos números de matrícula. 
Para que a correção automática funcione, é necessário que o código fonte do seu programa se chame main.c. Qualquer outro nome será rejeitado. Ainda, 
saída do seu programa deve seguir o padrão abaixo:

################ Saída ###########################################

<número matricula>: <média>

<número matricula>: <média>

<número matricula>: <média>

<número matricula>: <média>

...

#################################################################

Obs.: A media deve ser exibida com duas casas após a vírgula.

Dica: Carregue os valores dos números de matrícula, nota da prova 1 e nota da prova 2 para vetores de 10 elementos cada.*/

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
