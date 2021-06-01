/**Dado o vetor e a matriz abaixo, e considerando que o vetor alunos armazena os diferentes códigos de alunos de uma turma e a matriz notas armazena em sua primeira coluna o código do aluno e na segunda coluna uma nota deste aluno:

float alunos[5] = {110,120,122,105,107};
float notas[13][2] = {{110,6},{110,5},{105,6},{110,8},{122,6.6},{105,9},{122,2},{122,8},{107,2},{120,6},{107,4},{120,7},{120,10}};

Faça um programa em C que apresente a média aritmética de cada aluno.

Para que a correção automatizada funcione, use a formatação das mensagens abaixo:

# saída esperada - ignore esta linha - substituir <valor> pelo resultado a ser apresentado #

Media do aluno 110.000000 = <valor>
Media do aluno 120.000000 = <valor>
Media do aluno 122.000000 = <valor>
Media do aluno 105.000000 = <valor>
Media do aluno 107.000000 = <valor>*/

#include<stdio.h>
int main(){
	
	float alunos[5] = {110,120,122,105,107};
    float notas[13][2] = {{110,6},{110,5},{105,6},{110,8},{122,6.6},{105,9},{122,2},{122,8},{107,2},{120,6},{107,4},{120,7},{120,10}};
    float soma[5] = {0,0,0,0,0}, media[5] = {0,0,0,0,0}, n_provas[5] = {0,0,0,0,0};
    int i, j, k;
    
    for(i=0; i<13; i++){
    	for(j=0; j<2; j++){
    		for(k=0; k<5; k++){
    			if(notas[i][j] == alunos[k]){
    				soma[k] += notas[i][j+1];
    				n_provas[k] += 1;
				}
			}
	    }
    }
    for(i=0; i<5; i++){
    	media[i] = soma[i] / n_provas[i];
	}
	for(i=0; i<5; i++){
		printf("Media do aluno %f = %f\n", alunos[i], media[i]);
	}
}
