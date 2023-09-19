#include <stdio.h>
#include <locale.h>

/*Escreva um algorítimo que determine se um candidato a doação de sangue pode realizar a doação com base nos critérios:
  1 - Ter entre 16 e 69 anos de idade.
  2 - Pesar ao menos 50kg. */
  
bool ValidarLimiteSuperior(int quantosAnos) {
	printf("\n Passei por aqui... \n");
	return(quantosAnos <= 69);
}
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	float peso;
	
	printf("\n *** BEM-VINDO AO HEMOCENTRO DE BRASÍLIA *** \n");
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	
	if (idade >= 16 && ValidarLimiteSuperior(idade)) {
		printf("Informe seu peso: ");
		scanf("%f", &peso);
		
		if (peso >= 50) {
			printf("Dirija-se para o guichê X para realizar a doação.");
		} else {
			printf("Com %i anos, você poderia doar, mas seu peso não permite.", idade);
		}
	} else {
		printf("Com %i anos você não possui idade o suficiente para doar sangue.", idade);
	}
}
