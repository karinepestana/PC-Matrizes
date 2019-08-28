#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define TAM 1000

int main()
{
	int i, j, n, m[TAM][2];

	printf("Entre com o n: \n");
	scanf("%d", &n);

	m[0][0] =0;
	m[0][1] =0;

	for (i = 1; i < n+1; ++i)
	{
		printf("Entre com x: \n");
		scanf("%d", &m[i][0]);

		printf("Entre com y: \n");
		scanf("%d", &m[i][1]);
		
		if(m[i][0] > 0 && m[i][1] == 0)
			printf("O ponto está no leste\n");
		else
			if(m[i][0] < 0  && m[i][1] == 0)
				printf("O ponto está no oeste\n");
			else
				if(m[i][0] == 0 && m[i][1] > 0)
					printf("O ponto está no norte\n");
				else
					if(m[i][0] == 0  && m[i][1] < 0)
						printf("O ponto está no sul\n");
					else
						if(m[i][0] > 0 && m[i][1] > 0)
							printf("O ponto está no nordeste\n");
						else
							if(m[i][0] > 0 && m[i][1] < 0)
								printf("O ponto está no sudeste\n");
							else
								if(m[i][0] < 0 && m[i][1] > 0)
									printf("O ponto está no noroeste\n");
								else
									if(m[i][0] < 0 && m[i][1] < 0)
										printf("O ponto está no sudoeste\n");
									else
										if(m[i-1][0] == m[i][0] && m[i-1][1] == m[i][1])
											printf("O ponto é igual ao anterior\n");

	}

	
	return 0;
}
