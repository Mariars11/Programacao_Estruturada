#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	//permite o uso de acentuação no printf
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração de variáveis
	int num1, num2, resultado, aux;
	float raiz;
	
	do{
		//Informar os numeros a serem calculados
		//entrada de dados
		printf("\n");
		printf("\n=== Informe os números e as operações desejadas, conforme solicitado! === \n");
		printf("\nDigite o primeiro número: ");
		scanf("%d", &num1);
		printf("Digite o segundo número: ");
		scanf("%d", &num2);
		
		//switch case e as operações
		printf("|0| - Sair\n|1| - Soma dos números\n|2| - Produto do primeiro número pelo quadrado do segundo\n|3| - O quadrado do primeiro número\n|4| - A raiz quadrada da soma dos quadrados ");
		printf("\nEscolha a opção: ");
		scanf("%d", &aux);
		switch(aux){
			case 0:
				printf("Saindo...");
				break;
			case 1:
				resultado = num1 + num2;
				printf("\nO resultado: %d", resultado);
				break;
			case 2:
				resultado = num1 * (num2 * num2);
				printf("\nO resultado: %d", resultado);
				break;
			case 3:
				resultado = (num1 * num1);
				printf("\nO resultado: %d", resultado);
				break;
			case 4:
				resultado = (num1 * num1) + (num2 * num2);
				raiz = sqrt(resultado);
				printf("\nO resultado: %.2f", raiz);
				break;
			default:
				printf("Essa opção não está disponível");
		}
	}while(aux != 0);	
}

