/*Um arquivo estruturado, chamado megasena.bin, possui todos os registros de sorteio da Megasena desde sua criação em 1996, 
com um total de 2321 sorteios. Por arquivo estruturado, subentende-se um arquivo binário, onde o conteúdo é composto por registros 
(structs). Neste caso, o registro é definido da seguinte maneira:

struct mega_resultado_t{
 int concurso;
 char data[11];
 int dezenas[6];
 int sena;
 int quina;
 int quadra;
};
Onde, concurso é o número do sorteio. Data é a data do sorteio em formato "DD/MM/AAAA". Dezenas são os números sorteados. Sena, quina 
e quadra é a quantidade de ganhadores em cada uma destas faixas de premiação.

Faça um programa em Linguagem C capaz de receber o número do sorteio e localizar o sorteio em questão no arquivo, exibindo os demais dados. 
Os dados no arquivo estão ordenados pelo número do concurso, sendo que, o primeiro concurso é o número 1 e o último é o 2321. 

Para que a correção automática funcione, é necessário que o código fonte do seu programa se chame main.c. Qualquer outro nome será rejeitado. 
Ainda, saída do seu programa deve seguir o padrão abaixo:

################ Entrada ###################################

 printf("Digite o número do sorteio.\n");

##########################################################

################ Saída ####################################

<sorteio> <data> <dezenas> <sena> <quina> <quadra>

Exemplo:

2321 25/11/2020 14 25 28 41 43 46 1 40 2494

##########################################################

Dicas: Você pode ler cada um dos registros até encontrar o concurso em questão ou utilizar fseek() para "saltar" diretamente para o registro 
desejado, já que os concursos encontram-se ordenados. */

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
		printf("Digite o número do sorteio.\n");
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
