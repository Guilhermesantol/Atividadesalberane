#include <stdio.h>

int main(){
	float media = 0;
	int a, b, c;
	
	printf("Escreva 3 números para tirar a media entre eles: ");
	scanf("%d", &a);
	media = media + a;

	printf("Escreva 3 números para tirar a media entre eles: ");
	scanf("%d", &b);
	media = media + b;

	printf("Escreva 3 números para tirar a media entre eles: ");
	scanf("%d", &c);
	media = media + c;
	
	media = media / 3;

	printf("a media dos números escolhidos eh: %.2f", media);
}