/*Um arquivo estruturado, chamado megasena.bin, possui todos os registros de sorteio da Megasena desde sua cria��o em 1996, 
com um total de 2321 sorteios. Por arquivo estruturado, subentende-se um arquivo bin�rio, onde o conte�do � composto por registros 
(structs). Neste caso, o registro � definido da seguinte maneira:

struct mega_resultado_t{
 int concurso;
 char data[11];
 int dezenas[6];
 int sena;
 int quina;
 int quadra;
};
Onde, concurso � o n�mero do sorteio. Data � a data do sorteio em formato "DD/MM/AAAA". Dezenas s�o os n�meros sorteados. Sena, quina 
e quadra � a quantidade de ganhadores em cada uma destas faixas de premia��o.

Fa�a um programa em Linguagem C capaz de receber o n�mero do sorteio e localizar o sorteio em quest�o no arquivo, exibindo os demais dados. 
Os dados no arquivo est�o ordenados pelo n�mero do concurso, sendo que, o primeiro concurso � o n�mero 1 e o �ltimo � o 2321. 

Para que a corre��o autom�tica funcione, � necess�rio que o c�digo fonte do seu programa se chame main.c. Qualquer outro nome ser� rejeitado. 
Ainda, sa�da do seu programa deve seguir o padr�o abaixo:

################ Entrada ###################################

 printf("Digite o n�mero do sorteio.\n");

##########################################################

################ Sa�da ####################################

<sorteio> <data> <dezenas> <sena> <quina> <quadra>

Exemplo:

2321 25/11/2020 14 25 28 41 43 46 1 40 2494

##########################################################

Dicas: Voc� pode ler cada um dos registros at� encontrar o concurso em quest�o ou utilizar fseek() para "saltar" diretamente para o registro 
desejado, j� que os concursos encontram-se ordenados. */

#include<stdio.h>

struct mega_resultado_t{
 int concurso;
 char data[11];
 int dezenas[6];
 int sena;
 int quina;
 int quadra;
};

int main(){
	FILE *arq;
	int i, num = 0;
	if((arq = fopen("megasena.bin", "rb")) == NULL){
		printf("Erro ao abrir o arquivo!\n");
		return 0;
	}
	struct mega_resultado_t megasena;
	
	while(num < 1 || num > 2321){
		printf("Digite o n�mero do sorteio.\n");
	scanf("%d", &num);
	}
	
	fseek(arq, (num-1)*sizeof(megasena), SEEK_SET);
	fread(&megasena, sizeof(megasena), 1, arq);
	
	printf("%i %s ", megasena.concurso, megasena.data);
	for(i=0; i<6; i++){
		printf("%i ", megasena.dezenas[i]);
	}
	printf("%i %i %i", megasena.sena, megasena.quina, megasena.quadra);
	fclose(arq);
	return 0;
}
