#include <stdio.h>

int main(){
	int a, resto;
	printf("Escreva um valor para ver se ele e par ou impar: ");
	scanf("%d", &a);
	resto = a % 2;
	if( resto == 0){
		printf("o seu numero eh par!!!");
	}else{
		printf("seu numero eh impar!!!");
	}
	

}