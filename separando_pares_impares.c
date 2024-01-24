#include <stdio.h>
#include <locale.h>

void listas(int qt, int pares[], int impares[]) {
    int cont_pares = 0; 
    int cont_impares = 0;

    int num;
    int cont = 1;
    for(int i = 0; i < qt; i++){
        printf("Digite o %d° número: ", cont);
        scanf("%d", &num);
        cont++;

        if(num % 2 == 0){
            pares[cont_pares++] = num;
        }else{
            impares[cont_impares++] = num;
        }
    }

    printf("\nPARES\tÍMPARES\n");
    for(int i = 0; i < qt; i++){

        if(i < cont_pares){
            printf("%d\t", pares[i]);
        }else{
            printf("\t");
        }
        
        if(i < cont_impares){
            printf("%d\n", impares[i]);
        }else{
            printf("\n");
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("-----------  Listas de pares e ímpares  -----------\n");
    int qt;
    printf("Digite a quantidade de números que serão digitados: ");
    scanf("%d", &qt);

    int pares[qt];
    int impares[qt];

    listas(qt, pares, impares);

    return 0;
}
