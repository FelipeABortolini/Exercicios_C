#include <stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float pub, puu, pup, ptb, ptu, ptp, st, I, T;
	int qb, qu, qp;
	
	printf("Pre�o unit�rio da banana: ");
	scanf("%f", &pub);
	
	printf("Pre�o unit�rio da uva: ");
	scanf("%f", &puu);
	
	printf("Pre�o unit�rio do p�ssego: ");
	scanf("%f", &pup);
	
	printf("Quantidade de bananas: ");
	scanf("%d", &qb);
	
	printf("Quantidade de uvas: ");
	scanf("%d", &qu);
	
	printf("Quantidade de p�ssegos: ");
	scanf("%d", &qp);
	
	ptb = pub*qb;
	ptu = puu*qu;
	ptp = pup*qp;
	st = ptb + ptu + ptp;
	I = (st/100)*5;
	T = st + I;
	
	printf("\n%-10s %-20s %-20s %-15s\n", "Produto", "Pre�o Unit�rio", "Quantidade", "Pre�o Total");
	printf("%-10s R$%7.2f %31d %-s %8.2f\n", "Banana", pub, qb, "R$", ptb);
	printf("%-10s R$%7.2f %31d %-s %8.2f\n", "Uva", puu, qu, "R$", ptu);
	printf("%-10s R$%7.2f %31d %-s %8.2f\n", "P�ssego", pup, qp, "R$", ptp);
	printf("%10s %20s %-20s %-s %8.2f\n", "", "", "Sub-Total", "R$", st);
	printf("%10s %-41s %-s %8.2f\n", "", "Imposto (5%)", "R$", I);
	printf("%10s %20s %-20s %-s %8.2f\n", "", "", "Total", "R$", T);
}
