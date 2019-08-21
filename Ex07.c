#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
	int n, i, j, aux = 0;

	printf("n: \n");
	scanf("%d", &n);

	float m[n][n], media_diagonal = 0;

	printf("Entre com a matriz: \n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j ++){
			scanf("%f", &m[i][j]);			
		}		
	}

	for (i = 0; i < n; i++)
	{
		aux = n - 1 - i;
		media_diagonal += m[i][aux];
		//printf("%f\n", m[i][aux]);
		//printf("%d %d\n", i, aux);
	}

	media_diagonal = media_diagonal/n;

	printf("Posições acima da média: %f\n", media_diagonal);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j ++){
			if (m[i][j] > media_diagonal)
				printf("[%d][%d]\n", i, j);			
		}		
	}	
	
	return 0;
}
