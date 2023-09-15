#include <stdio.h>
#include <locale.h>

/* Exercício 10: Escreva um programa que solicite ao usuário o nome de uma verdura e uma fruta de sua
preferencia e ao final apresente na tela as informações digitadas pelo usuário da seguinte
forma: "Voce gosta de AAAAAAA e BBBBBBB"*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char verdura[100], fruta[100];
	printf("Informe uma verdura que você goste: ");
	scanf("%s", &verdura);
	printf("Informe uma fruta que você goste: ");
	scanf("%s", &fruta);
	
	printf("Você gosta de %s e %s", verdura, fruta);
}
