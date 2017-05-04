#include <stdio.h>
#include <stdlib.h>

main() {
	int n, b, c;
	n = 0; // valor é declarado para que seja possivel entrar no loop
	printf ("\t\t%c Tri%cngulo do n%cmero m%cximo %c\n\n", 254, 134, 163, 160, 254);
	while (n%2 != 1) { 
		printf ("Entre com o n%cmero m%cximo, que deve ser %cmpar: ", 163, 160, 161);
		scanf ("%d", &n);
		if(n%2 == 1) {
				for (b = n; b >= 1; b--) { 			
					printf("\n"); 
					for (c = n-b+1; c <= b; c++){ 
						printf("%2d ", c);
				}
			}
		}
	}
	system ("pause");
}

