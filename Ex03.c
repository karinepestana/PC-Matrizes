#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define TAM 1000

int main()
{
	int n, i, j, cont = 0;

	float v1_media = 0, v2_media = 0, mt_media = 0;
	float matriz[TAM][3];
	float media[TAM];

	printf("Número de alunos: \n");
	scanf("%d", &n);	

	for (i = 0; i < n; i++)
		media[i] = 0;

	for (i = 0; i < n; i++) {
		for (j = 0; j < 3; j ++){
			scanf("%f", &matriz[i][j]);

			if(j == 0){
				media[i] += 3*matriz[i][j];
				v1_media += matriz[i][j];
			}
			else{
				if(j == 1){
					media[i] += 3*matriz[i][j];
					v2_media += matriz[i][j];
				}
				else{
					media[i] += 4*matriz[i][j];
					mt_media += matriz[i][j];
				}
			}			
		}		
		media[i] = media[i]/10;
	}

	v1_media = v1_media/n;
	v2_media = v2_media/n;
	mt_media = mt_media/n;

	for (i = 0; i < n; i++)
	{
		printf("%f \n", media[i]);
	}
	printf("A média de v1 é %f\n", v1_media);

	for (i = 0; i < n; i++){		
		if (media[i] > v1_media){
			cont++;
		}		
	}
	printf("%d alunos estão acima da média de V1\n",cont);
	
	return 0;
}
