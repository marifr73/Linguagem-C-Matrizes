#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int cont, i = 0;
        printf("Os n�meros pares entre 1 e 500 s�o:\n");
        for(cont = 1; cont <= 500; cont++) {
            if(cont % 2 == 0) {
               i += cont;
            }
        }
    printf("A soma dos n�meros pares entre 1 e 500 �: %i\n", i);
    return (0);
}
