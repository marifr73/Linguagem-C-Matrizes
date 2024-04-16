#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float A[4][2], B[4][2];
    	int i, j, x = 1;
	//Informar o valor de A
  	for(i = 0; i < 4; i++){
		for(j = 0; j < 2; j++){
			printf("Digite o %iº valor: ", x++);
			scanf("%f", &A[i][j]);
		}
	}
	//Inverter o Valor de A para B
	for(i = 0; i < 4; i++){
        	for(j = 0; j < 2; j++) {
            B[i][j] = A[3 - i][1 - j];
        	}
    	}
	//Imprimir a Matriz A
	printf("\nMatriz A:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
            printf("%.2f ", A[i][j]);
        }
        printf("\n");
    }
	//Imprimir a Matriz B
    	printf("\nMatriz B:\n");
    	for (i = 0; i < 4; i++) {
        	for (j = 0; j < 2; j++) {
            		printf("%.2f ", B[i][j]);
        }
        printf("\n");
    }
	return 0;
}
