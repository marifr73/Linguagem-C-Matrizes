#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, m;
	
	// Solicita o número de linhas e colunas da matriz
	printf("Digite o número de linhas da matriz: ");
    scanf("%i", &n);
    printf("Digite o número de colunas da matriz: ");
    scanf("%i", &m);
    
    //Matriz A
    printf("\nMatriz A:\n");
    int A[n][m], x = 1;
    for(int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			printf("Digite o %iº valor: ", x++);
            scanf("%i", &A[i][j]);
		}
		printf("\n");
	}
	//Matriz B
	int B[n][m];
	 for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            B[i][j] = A[i][j] * 3;
        }
    }
	// Imprimir a matriz B
    printf("\nMatriz B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%i ", B[i][j]);
        }
        printf("\n");
    }
	return 0;
}
