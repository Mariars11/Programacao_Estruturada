#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	//permite o uso de acentua��o no printf
	setlocale(LC_ALL, "Portuguese");
	
	//Declara��o de vari�veis
	int num1, num2, resultado, aux;
	float raiz;
	
	do{
		//Informar os numeros a serem calculados
		//entrada de dados
		printf("\n");
		printf("\n=== Informe os n�meros e as opera��es desejadas, conforme solicitado! === \n");
		printf("\nDigite o primeiro n�mero: ");
		scanf("%d", &num1);
		printf("Digite o segundo n�mero: ");
		scanf("%d", &num2);
		
		//switch case e as opera��es
		printf("|1| - soma dos n�meros\n|2| - produto do primeiro n�mero pelo quadrado do segundo\n|3| - o quadrado do primeiro n�mero\n|4| - A raiz quadrada da soma dos quadrados ");
		printf("\nEscolha a op��o: ");
		scanf("%d", &aux);
		switch(aux){
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
				printf("Essa op��o n�o est� dispon�vel");
		}
	}while(aux != 0);	
}

