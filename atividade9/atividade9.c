#include <stdio.h>

int main(){
	int a, mult;
	printf("Escreva um numero para ver sua tabuada: ");
	scanf("%d", &a);

	for(int i = 0; i<=10; i++){
		
		printf("%d x %d = %d\n", a, i, a * i );
	}
}