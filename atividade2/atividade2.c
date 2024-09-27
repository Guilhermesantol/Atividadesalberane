#include <stdio.h>

int main(){
	int  numuser, numuser2;
	printf("Escreva um numero: ");
	scanf("%d", &numuser);
	
	printf("Escreva outro numero: ");
	scanf("%d", &numuser2);
	
	if(numuser > numuser2){
		printf("O primeiro numero %d, eh maior que o segundo numero %d", numuser, numuser2);
	}else if(numuser < numuser2){
		printf("O segundo numero %d, eh maior que o primeiro numero %d", numuser2, numuser);
	}

}