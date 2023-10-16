#include <stdio.h>
#include <locale.h>

/* Exercício 10: Elabore um algoritmo que solicite ao usuário uma palavra e um número inteiro que indicará a quantidade de vezes que a palavra digitada será impressa na tela, um em cada linha. */

int main () {
	setlocale(LC_ALL, "Portuguese");

	char word[200];
	int num;
	
	printf("Digite uma palavra: ");
	gets(word);
	printf("Agora digite quantas repetições terá a palavra: ");
	scanf("%d", &num);
	
	for (int i = 0; i < num; i++) {
		printf("%d - %s\n", i + 1, word);
	}
	
}
