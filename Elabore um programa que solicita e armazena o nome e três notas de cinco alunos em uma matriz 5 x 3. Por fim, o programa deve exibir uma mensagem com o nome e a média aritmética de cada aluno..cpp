#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char n[5][20];
	float nota[5][3], m[5];
	int i, j;
	//Laço para receber os nomes dos alunos
	for(i = 0; i < 5; i++){
        	printf("Digite o nome do %iº aluno: ", i+1);
        	scanf("%s", n[i]);
		//Laço para receber as notas
        	for(j = 0; j < 3; j++){
			printf("Digite a %iª nota do aluno %s: ", j+1, n[i]);
           	 	scanf("%f", &nota[i][j]);
       		 }
        	 printf("\n");
   	 }
	//Laço para média
	for(i = 0; i < 5; i++){
        m[i] = 0;
        	for(j = 0; j < 3; j++){
           		m[i] += nota[i][j];
        	}
      		  m[i] /= 3;
    	}
   	  printf("\n");
	//Laço para exibir a média e o nome dos alunos
    for(i = 0; i < 5; i++){
        printf("A média do aluno %s é: %.2f\n", n[i], m[i]);
    }
	return 0;
}
