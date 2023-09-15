#include <stdio.h>
#include <locale.h>

/* Exercício 14: Refazer o programa 14 realizando as quatro operações aritméticas básicas" */

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float num1, num2;
	
	printf("Escolha dois números reais\n");
	scanf("%f\n", &num1);
	scanf("%f", &num2);
	
	printf("A soma dos numeros %.2f e %.2f corresponde a %.2f\n", num1, num2, num1 + num2);
	printf("A subtracao dos numeros %.2f e %.2f corresponde a %.2f\n", num1, num2, num1 - num2);
	printf("O produto dos numeros %.2f e %.2f corresponde a %.2f\n", num1, num2, num1 * num2);
	printf("A divisao dos numeros %.2f e %.2f corresponde a %.2f\n", num1, num2, num1 / num2);
	int resto = (int)num1 % (int)num2;
	printf("O resto da divisao dos numeros %.2f e %.2f corresponde a %d", num1, num2, resto);
}
