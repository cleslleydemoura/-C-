#include <stdio.h>
#include <locale.h>

/* Exercício 14: Escreva um programa em linguagem C que solicite ao usuário a média para aprovação
em um curso e em seguida solicite ao usuário o nome, sexo e as 03 notas do aluno e ao
final imprima a frase: "O aluno XXXXX foi aprovado com media YY" considerando o gênero
do(a) aluno(a) e se foi aprovado(a) ou reprovado(a)*/

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	char nome[60], sexo;
	float n1, n2, n3, media;
	float resultado;
	
	printf("Digite a média de aprovação de sua universidade: ");
	scanf("%f", &media);
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	printf("Informe seu sexo (M/F): ");
	scanf("%s", &sexo);
	printf("Informe sua primeira nota: ");
	scanf("%f", &n1);
	printf("Informe sua segunda nota: ");
	scanf("%f", &n2);
	printf("Informe sua terceira nota: ");
	scanf("%f", &n3);
	
	resultado = (n1 + n2 + n3) / 3.0;
	
	 if (resultado >= media) {
        if (sexo == 'M' || sexo == 'm') {
            printf("O aluno %s foi aprovado com média %.2f\n", nome, media);
        } else if (sexo == 'F' || sexo == 'f') {
            printf("A aluna %s foi aprovada com média %.2f\n", nome, media);
        }
    } else {
        if (sexo == 'M' || sexo == 'm') {
            printf("O aluno %s foi reprovado com média %.2f\n", nome, media);
        } else if (sexo == 'F' || sexo == 'f') {
            printf("A aluna %s foi reprovada com média %.2f\n", nome, media);
        }
    }

    return 0;
}
}
