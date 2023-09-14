#include <stdio.h>
#include <locale.h>

/* Exercício 10: O sistema de avaliação de determinada disciplina é composto por três provas. A primeira
prova tem peso 2, a segunda tem peso 3 e a terceira tem peso 5. Considerando que a
média para aprovação é 6.0, faça um algoritmo para calcular a média final de um aluno
desta disciplina e dizer se o aluno foi aprovado ou não*/

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float p1, p2, p3;
	float maxp1;
	float maxp2;
	float maxp3;
	
	printf("DIgite a nota da primeira prova: ");
	scanf("%f", &p1);
	printf("DIgite a nota da segunda prova: ");
	scanf("%f", &p2);
	printf("DIgite a nota da terceira prova: ");
	scanf("%f", &p3);
	
	
	float media_final = p1 + p2 + p3;
	
	if (maxp1 > 2) {
		printf("Nota inválida.");
	} else if (maxp2 > 3) {
		printf("Nota inválida.");
	} else if (maxp3 > 5) {
		printf("Nota inválida.");
	} else {
	if (media_final >= 6) {
		printf("Aluno aprovado.");
	} else {
		printf("Aluno reprovado.");
	}
	}
	
}
