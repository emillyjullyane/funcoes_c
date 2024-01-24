#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("--------------------------- MÍNIMO E MÁXIMO ------------------------\n");
    printf("-- Quando desejar receber os resultados digite um número negativo --\n\n");
    int n, cont = 1;
    int min, max;

    printf("Digite o %d° número: ", cont);
    scanf("%d", &n);

    if(n < 0){
        printf("Nenhum número foi inserido.\n");
        return 0;
    }

    min = max = n;
    cont++;
    
    do{
        printf("Digite o %d° número: ", cont);
        scanf("%d", &n);

        if(n < 0){
            break;
        }
        if(n < min){
            min = n;
        }
        if(n > max){
            max = n;
        }
        cont++;
        
    }while(n>=0);

    printf("\nO valor mínimo é: %d\n", min);
    printf("O valor máximo é: %d\n", max);

    return 0;
}
