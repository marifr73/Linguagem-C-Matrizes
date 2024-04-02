#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a[2][3], b[2][3], x = 1, i, j;
	//Laço para receber os valores de A
	printf("Matriz A:\n");
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			printf("Digite o %iº valor: ", x++);
			scanf("%i", &a[i][j]);
		}
	}
	//Laço para receber os valores de B
    printf("\n\nMatriz B:\n");
	x = 1;
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			printf("Digite o %iº valor: ", x++);
			scanf("%i", &b[i][j]);
		}
	}
	//Laço para exibir a soma das matrizes A + B
	printf("\nSoma das matrizes A e B:\n");
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			printf("%i\t", a[i][j] + b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
