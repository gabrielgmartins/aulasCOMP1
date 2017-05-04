/* 	Gabriel Germino Martins de Jesus	16200529
	Anderson Alves Marzani				16200516
	Turma: 	2202A
	Grupo:	11
	Tarefa01_2017_1
	Exercício 2 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int j;

main(){
		printf ("\t\t%c Ra%cz quadrada inteira pr%cxima do valor real %c\n\n", 254, 161, 162, 254);
	float a;
	int raInt (float x); // protótipo
	raInt (a);
		printf ("A ra%cz quadrada inteira do numero digitado mais pr%cxima do valor real %c: %d\n", 161, 162, 130, j);
	system ("pause");	
}

int raInt (float x){
		printf ("Entre com o n%cmero: ", 163);
		scanf ("%f", &x);
	float k;
	k = sqrt(x);
	j = k; //transforma em inteiro
	if (k-j >= 0.5) j++; //arredonda o número para cima, caso precise
	return j;
}
