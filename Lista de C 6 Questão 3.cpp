#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char n[5][20];
	float nota[5][3], m[5];
	int i, j;
	for(i = 0; i < 5; i++){
        printf("Digite o nome do %i� aluno: ", i+1);
        scanf("%s", n[i]);
        for(j = 0; j < 3; j++){
            printf("Digite a %i� nota do aluno %s: ", j+1, n[i]);
            scanf("%f", &nota[i][j]);
        }
         printf("\n");
    }
	for(i = 0; i < 5; i++){
        m[i] = 0;
        for(j = 0; j < 3; j++){
            m[i] += nota[i][j];
        }
        m[i] /= 3;
    }
    printf("\n");
    for(i = 0; i < 5; i++){
        printf("A m�dia do aluno %s �: %.2f\n", n[i], m[i]);
    }
	return 0;
}