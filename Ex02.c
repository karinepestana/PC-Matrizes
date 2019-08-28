#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define TAM 100

int main()
{
	int l, c, i, j, cont = 0;
	float matriz[TAM][TAM];
	float media[TAM];

	printf("L: \n");
	scanf("%d", &l);
	printf("C: \n");
	scanf("%d", &c);
	

	for (i = 0; i < l; i++)
		media[i] = 0;	

	for (i = 0; i < l; i++) {
		for (j = 0; j < c; j ++){	
			scanf("%f", &matriz[i][j]);
			media[i] += matriz[i][j];
		}
		media[i] = media[i]/c;
	}

	for (i = 0; i < l; i++){
		for (j = 0; j < c; j++){
			if (matriz[i][j] > media[i]){
				cont++;
			}
		}
		printf("A média da %d° linha é %f e %d números estão acima da média \n", i+1, media[i], cont);
		cont = 0;
	}
	
	return 0;
}
