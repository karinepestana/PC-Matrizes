#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
	int l, c, i, j;

	printf("L: \n");
	scanf("%d", &l);
	printf("C: \n");
	scanf("%d", &c);

	float M1[l][c], M2[l][c];

	printf("Entre com a primeira matriz: \n");
	for (i = 0; i < l; i++) {
		for (j = 0; j < c; j ++){
			scanf("%f", &M1[i][j]);			
		}		
	}

	printf("Entre com a segunda matriz: \n");
	for (i = 0; i < l; i++) {
		for (j = 0; j < c; j ++){
			scanf("%f", &M2[i][j]);			
		}		
	}

	printf("Matriz S:\n");
	for (i = 0; i < l; i++) {
		for (j = 0; j < c; j ++){
			printf("%f\n", M1[i][j]+M2[i][j]);			
		}		
	}	
	
	return 0;
}
