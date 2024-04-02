#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float A[4][2]; 
    float B[4][2]; 
    int i, j, x = 1;
  	for(i = 0; i < 4; i++){
		for(j = 0; j < 2; j++){
			printf("Digite o %iº valor: ", x++);
			scanf("%f", &A[i][j]);
		}
	}
	for(i = 0; i < 4; i++){
        for(j = 0; j < 2; j++) {
            B[i][j] = A[3 - i][1 - j];
        }
    }
	printf("\nMatriz A:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
            printf("%.2f ", A[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz B:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
            printf("%.2f ", B[i][j]);
        }
        printf("\n");
    }
	return 0;
}