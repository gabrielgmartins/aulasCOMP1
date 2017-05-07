#include <stdio.h>
#include <stdlib.h>

/*funcoes auxiliares*/

//printa as matrizes
void **printMatriz(int **matriz, int nlinha, int ncoluna){
	int i,j;
	for(i=0;i<nlinha;i++){
		printf("\n");
		for(j=0;j<ncoluna;j++){
			printf("%d\t",matriz[i][j]);
		}
	}
}

//alocacao dinamica das matrizes
int **matrizAlloc(int nlinha, int ncoluna){
	int **Matriz = (int **) malloc(sizeof(int *) * nlinha);
	int i;
	for(i=0;i<nlinha;i++){
		Matriz[i] = (int *) malloc(sizeof(int) * ncoluna);
	}
	return Matriz;
}

//soma matrizes
int **somaAB(int **mA, int **mB, int nlinha, int ncoluna){
	int **Msoma = matrizAlloc(nlinha, ncoluna);
	int i,j;
	for(i=0;i<nlinha;i++){
		for(j=0;j<ncoluna;j++){
			Msoma[i][j] = mA[i][j] + mB[i][j];
		}
	}
	return Msoma;
}

//transpoe A
int **transpostaA(int **mA, int nlinha, int ncoluna){
	int **aLinha = matrizAlloc(ncoluna,nlinha); //inverte a ordem aqui
	int i,j;
	for(i=0;i<nlinha;i++){
		for(j=0;j<ncoluna;j++){
			aLinha[j][i] = mA[i][j];
		}
	}
	return aLinha;
}


//multiplica as matrizes
int **multAB(int **mA, int **mB, int linhaA, int colunaA, int linhaB, int colunaB){
	int **matrizMult = matrizAlloc(linhaA,colunaB);
	int i,j,k,l, aux=0;
	for(i=0;i<linhaA;i++){
		for(k=0;k<colunaB;j++){
			for(l=0;l<colunaA;l++){
				aux += mA[i][l] * mB[l][k];
			}
			matrizMult[i][k] = aux;
			aux = 0;
			break;
		}
	}
	for(i=0;i<linhaA;i++){
		for(k=1;k<colunaB;j++){
			for(l=0;l<colunaA;l++){
				aux += mA[i][l] * mB[l][k];
			}
		matrizMult[i][k] = aux;
		aux = 0;
		break;
		}
	}
	for(i=1;i<linhaA;i++){
		for(k=0;k<colunaB;j++){
			for(l=0;l<colunaA;l++){
				aux += mA[i][l] * mB[l][k];
			}
			matrizMult[i][k] = aux;
			aux = 0;
			break;
		}
	}	
	return matrizMult;
}

/*fim das auxiliares*/

main(){
	//prepara A
	int nla, nca;
	printf("Entre com a quantidade de linhas e colunas da matriz A.\nLinhas: ");
	scanf("%d",&nla);
	printf("Colunas: ");
	scanf("%d",&nca);
	int **A = matrizAlloc(nla,nca);
	int i, j;
	for(i=0;i<nla;i++){
		for(j=0;j<nca;j++){
			printf("Entre com o %d elemento da %d linha: ",j+1,i+1);
			scanf("%d",&A[i][j]);
		}
	}	
	
	//prepara B
	int nlb, ncb;
	printf("\nEntre com a quantidade de linhas e colunas da matriz B.\nLinhas: ");
	scanf("%d",&nlb);
	printf("Colunas: ");
	scanf("%d",&ncb);
	int **B = matrizAlloc(nlb,ncb);
	for(i=0;i<nlb;i++){
		for(j=0;j<ncb;j++){
			printf("Entre com o %d elemento da %d linha: ",j+1,i+1);
			scanf("%d",&B[i][j]);
		}
	}
	
	//mostra as matrizes
	printf("A= \n");
	printMatriz(A,nla,nca);
	printf("\n\nB= \n");
	printMatriz(B,nlb,ncb);
	printf("\n\n");
	//menu de selecão
	printf("\nO que deseja fazer agora?\n");
	printf("1- A+B\t2-A*B\n3- A'\t4- Mostrar aij\n0- Terminar o programa\n");
	int escolha;
	scanf("%d",&escolha);
	switch(escolha){
		case 1:{
		
			if(nca == ncb && nla == nlb){
			int **C = somaAB(A,B,nla,nca);
			printf("A+B = \n");
			printMatriz(C,nla,nca);	//chamar funcao
			}
			else printf("Não é possível somar as matrizes.\n");
			break;
		
		}
		case 2:{
			if(nca!=nlb){
				printf("Não é possível.\n");
				break;
			}
			int **C = multAB(A,B,nla,nca,nlb,ncb);
			printMatriz(C,nla,ncb);
			break;
		}
		case 3:{
		
			int **C = transpostaA(A,nla,nca);
			printf("A' = \n");
			printMatriz(C,nca,nla);	//chamar funcao
			break;
		
		}
		case 4:{
			
			int linha, coluna;
			printf("\nNúmero da linha: ");
			scanf("%d",&linha);
			printf("\nNúmero da coluna: ");
			scanf("%d",&coluna);
			if(linha > nla || coluna > nca){
				printf("Não existe.\n");
				break;
			}
			linha--;
			coluna--;
			printf("O elemento é: %d\n",A[linha][coluna]);
			break;
			
			}
			
		case 0:{
			break;
		}
	}
	
	system("pause");
	
}

