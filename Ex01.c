#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define TAM 1000

int main()
{
	int n, i, pos;
	float vetor[TAM], menor;

	printf("Entre com o tamanho do vetor: \n");
	scanf("%d", &n);
		
	for (i = 0; i < n; i++) {
		printf("Entre com o %d° número: \n", i+1);
		scanf("%f", &vetor[i]);
	}

	menor = vetor[0];
	pos = 0;
	for (i = 1; i < n; i++){
		if (vetor[i] < menor){
			menor = vetor[i];
			pos = i;
		}
	}
	printf("O menor valor está na posição %d do vetor\n", pos);
	return 0;
}
