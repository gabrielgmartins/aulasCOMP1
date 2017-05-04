/* 	Gabriel Germino Martins de Jesus	16200529
	Anderson Alves Marzani				16200516
	Turma: 	2202A
	Grupo:	11
	Tarefa01_2017_1
	Exercício 4 */


#include <stdio.h>
#include <stdlib.h>

main() {
	int a, b, i, j = 0;
	printf ("\t\t%c Tri%cngulo de Floyd %c\n\n",254,131,254);
	printf ("Entre com a quantidade de linhas: ");
	scanf ("%d",&a);
	for (i=0; i <= a; i++) {			//contador de linhas
			for (b = i; b > 0; b--) {	//quantidade de js printados por linha
				j++;
				if (a > 13){			// esse if só serve pra deixar o triangulo
					printf ("%3d ",j);	// mais bonito se forem printadas mais de
				}						// três casas, da pra rodar sem isso tb
				else printf ("%2d ",j); 
			}
		printf ("\n");
		}
	system ("pause");
}
