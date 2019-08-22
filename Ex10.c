#include <stdlib.h>
#include <time.h>
#include <stdio.h>


int main(){
	int n,i,j;
	char v[50][50];
	
	
	printf ("Informe um número ímpar entre 3 e 50: ");
	scanf ("%d", &n);	
	
	if ((n>3 && n<50) && (n%2==1)){
		// Preenche a matriz com pontos (.)
		for (i=0; i<n;i++){
			for (j=0; j<n;j++){
				v[i][j]='.';
			}
		}
		// preenche a matriz central com 'x'
		for (i=0;i<n; i++){
			if ( i==n/2){
				for (j=0;j<n;j++){
					v[i][j]='x';
				}
			}
		}
		//preenche a matriz central superior e esquerdo com 'x' e '.'
		for (i=(n/2); i>0; i--){
			for (j=0;j<n/2;j++){
				if (v[i][j]=='x'){
					v[i-1][j+1]='x';
				}
			}
		}
		//preenche a matriz central superior direita com 'x' e '.'
		for (i=(n/2); i>0; i--){
			for (j=n;j>n/2;j--){
				if (v[i][j]=='x'){
					v[i-1][j-1]='x';
				}
			}
		}
		//preenche a matriz central inferior esquerda com 'x' e '.'
		for (i=(n/2); i<n; i++){
			for (j=0;j<n/2;j++){
				if (v[i][j]=='x'){
					v[i+1][j+1]='x';
				}
			}
		}
		
		//preenche a matriz central inferior direita com 'x' e '.'
		for (i=(n/2); i<n; i++){
			for (j=n;j>n/2;j--){
				if (v[i][j]=='x'){
					v[i+1][j-1]='x';
				}
			}
		}
				
		//Imprime a matriz 
		for (i=0;i<n;i++){
			printf ("\n");
			for (j=0;j<n;j++){
				printf ("%c", v[i][j]);
			}
		}
		printf ("\n");
	}
			
	else{ 
		printf ("ESSE NÚMERO É PAR");
	}
	return 0;
}