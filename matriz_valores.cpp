#include <stdio.h>
#define lin 4
#define col 4

int main(){
	int i, j, valores[lin][col] = 	{ 	{5,3,10,14},
						{7,1,11,15},
						{8,2,12,17},
						{9,6,13,18}
					};
	int soma_linhas[lin] = {0}, multiplicacao_colunas[col] = {1,1,1,1}; 
	// Soma das linhas
	for(i = 0; i < lin; i++){
		for(j = 0; j < col; j++){
			soma_linhas[i] += valores[i][j];
		}		
	}
	// Multiplicação das colunas	
	for(i = 0; i < lin; i++){
		for(j = 0; j < col; j++){
			multiplicacao_colunas[j] *= valores[i][j];
		}		
	}
	// Impressão da matriz e da soma das linhas	
	for(i = 0; i < lin; i++){
		for(j = 0; j < col; j++){
			printf("\t%4d", valores[i][j]);
		}
		printf("  (--> %d)", soma_linhas[i]);
		printf("\n");
	}
	// 	
	printf("\t   |\t   |\t  |\t   |\n");
	printf("\t   *\t   *\t  *\t   *");
	printf("\n");
	
	// Impressão da multiplicação das colunas
		
	for(j = 0; j < col; j++){
		printf("\t %4d", multiplicacao_colunas[j]);
	}	
	
	return 0;
}
