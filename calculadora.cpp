#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	int opt;
	float soma,subtracao;
	float x,y,mult, div;

	printf("***************************************\n");
	printf("*             Calculadora             *\n");
	printf("* 1- Soma (+)                         *\n");
	printf("* 2- Subtração (-)                    *\n");
	printf("* 3- Multiplicação (*)                *\n");
	printf("* 4- Divisão (%)                       *\n");
	printf("* 5- Sair                             *\n");
	printf("***************************************\n");
	printf("* Digite qual operação deseja fazer:  ");
	scanf("%d", &opt);
	
	if(opt==1){
		printf("Digite o primeiro valor: ");
		scanf("%f", &x);
		printf("Digite o segundo valor : ");
		scanf("%f", &y);
		soma=x+y;
		printf("\nA soma dos números %.0f+%.0f: %.0f\n\n", x,y,soma);
	}
	
	if(opt==2){
		printf("Digite o primeiro valor: ");
		scanf("%f", &x);
		printf("Digite o segundo valor : ");
		scanf("%f", &y);
		subtracao=x-y;
		printf("\nA subtração dos números %.0f-%.0f: %.0f\n\n", x,y,subtracao);
	}
	
	if(opt==3){
		printf("Digite o primeiro valor: ");
		scanf("%f", &x);
		printf("Digite o segundo valor : ");
		scanf("%f", &y);
		mult=x*y;
		printf("\nA multiplicação dos números %.1f*%.1f: %f\n\n", x,y,mult);
	}
	
	if(opt==4){
		printf("Digite o primeiro valor: ");
		scanf("%f", &x);
		printf("Digite o segundo valor : ");
		scanf("%f", &y);
		div=x/y;
		printf("\nA divisão dos números %.1f/%.1f: %f\n\n", x,y,div);
	}
	
	if(opt==5){
		printf("\nVocê digitou Sair \n");
		return(0);
	}
	
	else{
		system("pause");
		system("cls");
		main();
	}
		return(0);
}
