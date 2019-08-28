#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define TAM 100


int main(){
	int n,i,j;
	char v[TAM][50];
	
	printf ("Informe um número: ");
	scanf ("%d", &n);	

	for (i = 0; i < 50; ++i)
		v[0][i] = 0;

	v[0][25] = 1;
	
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < 49; j++)
		{
			v[i][j] = (v[i-1][j-1]+v[i-1][j+1])%2;
		}
			v[i][j] = v[i-1][j-1]%2;
	}

	for (i = 0; i < n; i++)
	{
		printf("Interação %d\n", i);
		for (j = 0; j < 50; j++)
			printf("%d ", v[i][j]);

	}
	
	
	return 0;
}