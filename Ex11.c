#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, i,j;
	
	printf ("Informe o número de linhas/colunas de ordem Par da matriz: ");
	scanf ("%d", &n);
	
	int v[n][n], m[n][n];
	
	
	if (n%2==0){
		//Pega os valores da matriz, indicado pelo usuário 
		for (i=0;i<n;i++){
			for (j=0;j<n;j++){
				scanf ("%d", &v[i][j]);
				m[i][j]=v[i][j];
			}
		}	
		for ( i=0; i<n; i++){
			for (j=0; j<n/2; j++){
				m[i][j]=v[i][(n/2)+j];
			}
		}
		for (i=0; i<n; i++){
			for (j=n/2; j<n; j++){
				m[i][j]=v[i][j-(n/2)];
			}
		}
		//Imprime o vetor na tela 
		for (i=0;i<n;i++){
			printf ("\n");
			for (j=0;j<n;j++){
				printf("%d", m[i][j]);
			}
		}
		printf ("\n");
	}else printf ("Digite um número par");
	return 0;
}
	
