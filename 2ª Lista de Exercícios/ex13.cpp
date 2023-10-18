#include <stdio.h>
#include <locale.h>

/* Exercício 13: Elabore um algoritmo que leia um numero de entrada que indicara a quantidade
 de registros a serem lidos (N). Em seguida algoritmo deve solicitar o sexo (M/F)
 e idade de N pessoas e ao final apresentar a media de idade de ambos os generos
 catalogados. */

int main() {
	setlocale(LC_ALL, "Portuguese");
	
 	int i, qtdMasc=0, qtdFem=0, somaMasc=0, somaFem=0, qtdTotal, idade;
    char txtSexo;
    printf("Informe quantos alunos serão pesquisados: ");
    scanf("%i", &qtdTotal);
    for (i=1; i<=qtdTotal; i++) {
      do {
        printf("Informe o sexo da %i. pessoa (M/F): ", i);
        scanf("%s", &txtSexo);
}
      while (txtSexo != 'm' & txtSexo != 'M' & txtSexo != 'f' & txtSexo != 'F');

      do {
        printf("Informe a idade da %i. pessoa: ", i);
        scanf("%i", &idade);
      }
while ((idade <= 0) | (idade > 120));
     
      if (txtSexo == 'm' | txtSexo == 'M') {
        somaMasc = somaMasc + idade;
        qtdMasc +=1; // é o mesmo que qtdMasc = qtdMasc+1;
      }
      else /*if (txtSexo == 'f' | txtSexo == 'F') */{
        somaFem = somaFem + idade;
        qtdFem = qtdFem + 1;  // é o mesmo que qtdMasc++;
      }
    }  // fim do laço for...

  float f1=somaMasc;
  float f2=qtdMasc;

  if (qtdMasc == 0)
    printf("\n Nenhum indivíduo do sexo masculino foi informado.");
  else if (qtdMasc == 1)
    printf("\n Somente um indivíduo do sexo masculino foi informado com %i anos.", somaMasc);
  else
 printf("\n A média das idades dos %i homens é: %0.2f", qtdMasc, (f1/f2));
 
  f1=somaFem;
  f2=qtdFem;
 
  if (qtdFem == 0)
    printf("\n Nenhum indivíduo do sexo feminino foi informado.");
  else if (qtdFem == 1)
    printf("\n Somente um indivíduo do sexo feminino foi informado com %i anos.", somaFem);
  else
    printf("\n A média das idades das %i mulheres é: %0.2f", qtdFem, (f1/f2));
}
