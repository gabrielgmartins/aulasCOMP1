/* 	Gabriel Germino Martins de Jesus	16200529
	Anderson Alves Marzani				16200516
	Turma: 	2202A
	Grupo:	11
	Tarefa01_2017_1
	Exercício 3 */


#include <stdlib.h>
#include <stdio.h>

main(){
	int a, b, teto;
	int piso, cont;
	float media, mpares;
	float pares = 0,contpares = 0;
		printf ("\t\t%c Opera%c%ces com n%cmeros %c\n\n", 254, 135, 228, 163, 254);
		printf ("Entre com seus n%cmeros, separando-os com enter.\n", 163);
		printf ("Para terminar, entre com o n%cmero zero.\n", 163);
		scanf ("%d", &a);
	teto = a; //comparar dps
	piso = a; // ||      ||
	b = 0;
	for(cont = 0, a; a != 0; cont++){ //b)
		b += a; //a)
		if (teto < a){ //d)
			teto = a;
		}
		if (piso > a){ //e)
			piso = a;
		}
		if( a%2 == 0){ 
			contpares++;
			pares += a;
		}
		scanf("%d", &a);
	}
	float soma = b, contf = cont;
	media = (soma / contf); //c)
	if(contpares != 0){ //f)
	mpares = (pares / contpares);
	}
	else mpares = 0; //pelo erro do zero
		printf ("a) A soma dos n%cmeros %c: %d\n", 163, 130, b);
		printf ("b) A quantidade de n%cmeros %c: %d\n", 163, 130, cont);
		printf ("c) A m%cdia de n%cmeros digitados %c: %.2f\n", 130, 163, 130, media);
		printf ("d) O maior dos n%cmeros %c: %d\n", 163, 130, teto);
		printf ("e) O menor dos n%cmeros %c: %d\n",163, 130, piso);
		printf ("f) A m%cdia dos n%cmeros pares %c: %.2f\n",130, 163, 130, mpares);
	system ("pause");
}

