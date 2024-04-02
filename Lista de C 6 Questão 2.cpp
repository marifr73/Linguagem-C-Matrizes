#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a[2][3], b[2][3], x = 1, i, j, s[2][3];
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			printf("Digite o %iº valor: ", x++);
			scanf("%i", &a[i][j]);
		}
	}
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			printf("Digite o %iº valor: ", x++);
			scanf("%i", &b[i][j]);
		}
	}
	printf("\nSoma entre os valores informados:\n");
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			s[i][j]= a[i][j] + b[i][j];
		}
	}
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			printf("%i ", s[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}