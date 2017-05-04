/* 	Gabriel Germino Martins de Jesus	16200529
	Anderson Alves Marzani				16200516
	Turma: 	2202A
	Grupo:	11
	Tarefa01_2017_1
	Exercício 5 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){

		float peso,altura;
		float imcCalc(float peso, float altura); // protótipo funcao

		printf("\t\t%c C%clculo de IMC %c\n\n",254,160,254);
		printf("Para os valores, use ponto separador de casa decimal.\n");
		printf("Entre com seu peso: ");
		scanf("%f", &peso);
		printf("Agora, entre com sua altura: ");
		scanf("%f", &altura);
		imcCalc(peso, altura); 					// chamada funcao

	system("pause");
}

float imcCalc(float peso, float altura){

	float imc = peso/(altura*altura);


	if (imc <= 18.5 ){
		printf("\nSeu IMC %c %.2f e voc%c est%c abaixo do peso ideal.\n\n",130, imc, 136, 160);
	}
	if (imc >= 18.6 && imc <= 24.9){
		printf("\nSeu IMC %c %.2f e voc%c %c considerada(o) saudavel.\n\n",130, imc, 136, 130);
	}
	if (imc >= 25 && imc <= 29.9){
		printf("\nSeu IMC %c %.2f e voc%c tem peso em excesso.\n\n",130, imc, 136);
	}
	if (imc >= 30 && imc <= 34.9){
		printf("\nSeu IMC %c %.2f e voc%c tem obesidade de grau I.\n\n",130, imc, 136);
	}
	if (imc >= 35 && imc <= 39.9){
		printf("\nSeu IMC %c %.2f e voc%c tem obesidade de grau II,\nque %c considerada severa.\n\n",130, imc, 136, 130);
	}
	if (imc >= 40){
		printf("\nSeu IMC %c %.2f e voc%c tem obesidade de grau III,\nobesidade morbida.\n\n",130, imc, 136);
	}

	return imc;
	
}
