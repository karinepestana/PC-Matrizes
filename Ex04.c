#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define TAM 1000

int main()
{
	int n, i, k =0, j, aux = 1001;
	int vetor[TAM][2];

	printf("Entre com o tamanho do vetor: \n");
	scanf("%d", &n);	

	for (i = 0; i < n; i++)
	{
		for (int k = 0; k < 2; k++)
		{
			vetor[i][k] = 1001;
		}		
	}

	for (i = 0; i < n; i++) {	
		scanf("%d", &aux);

		while (vetor[k][0] != 1001 && k < n){
			if (vetor[k][0] == aux){
				vetor[k][1]++;
				aux = 1001;
			}
			k++;
		}		
		if (aux != 1001){
			vetor[k][0] = aux;
			vetor[k][1] = 1;
		}
		k = 0;
	}

	for (k = n - 1; k > 0; k--) {       

        for (j = 0; j < k; j++) {

            if (vetor[j][0] > vetor[j + 1][0]) {
                aux          = vetor[j][0];
                vetor[j][0]     = vetor[j + 1][0];
                vetor[j + 1][0] = aux;
            }
        }
    }
    
	printf("Ordenado: \n");

	for (i = 0; i < n && vetor[i][0] != 1001; i++) {		
		printf("%d", vetor[i][0]);
	}

	return 0;
}
