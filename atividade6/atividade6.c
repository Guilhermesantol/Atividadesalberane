#include <stdio.h>

int main(){
	int i = 0, j = 0;
 	int matriz[2][2];

	printf("escreva um numero para armazenar na matriz posicao 1: ");
	scanf("%d", &matriz[0][0]);

	printf("escreva um numero para armazenar na matriz posicao 2: ");
	scanf("%d", &matriz[0][1]);

	printf("escreva um numero para armazenar na matriz posicao 3: ");
	scanf("%d", &matriz[1][0]);
	
	printf("escreva um numero para armazenar na matriz posicao 4: ");
	scanf("%d", &matriz[1][1]);

	printf("as posições preenchidas sao\n %d %d\n %d %d", matriz[0][0], matriz[0][1], matriz[1][0], matriz[1][1]);

}