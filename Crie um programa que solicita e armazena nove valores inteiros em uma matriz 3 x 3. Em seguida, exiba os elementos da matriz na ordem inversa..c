#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, j, x = 1, mat[3][3];
	//Laço para receber os valores de mat
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("Digite o %iº valor: ", x++);
			scanf("%i", &mat[i][j]);
		}
	}
	//Laço para exibir os valores na ordem inversa
	printf("\nMATRIZ\n");
	for(i = 2; i >= 0; i--){
		for(j = 2; j >= 0; j--){
			printf("%i  ", mat[i][j]);
		}
		printf("\n");
	}
	return 0;
}
