#include <stdio.h>
#include <string.h>

struct Pessoa{
	char nome[50];
	int idade;
	float altura;
};

int main(){
	
	struct Pessoa pessoa1 = {"guilherme", 18, 1.80};

	printf("nome da pessoa %s\n", pessoa1.nome);
	printf("sua idade eh %d\n", pessoa1.idade);
	printf("e sua altura eh %.2f", pessoa1.altura);

 return 0;
}