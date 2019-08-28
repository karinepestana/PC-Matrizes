#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define TAM 1000

int main()
{
	int n, i, pos, k, j;
	float aux;
	float vetor[TAM];	

	printf("Entre com o tamanho do vetor: \n");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {		
		scanf("%f", &vetor[i]);
	}

	for (k = n - 1; k > 0; k--) {

        for (j = 0; j < k; j++) {

            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
	
	printf("Ordenado: \n");

	for (i = 0; i < n; i++) {		
		printf("%f \n", vetor[i]);
	}

	return 0;
}
