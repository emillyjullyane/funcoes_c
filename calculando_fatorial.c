#include <stdio.h>
#include <locale.h>

int c_fat(int num) {
    int fat = 1;
    for (int i = 1; i <= num; i++){
        fat *= i;
    }
    return fat;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int numero;
    printf("---- Cálculo de fatorial ----\n");
    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("O número digitado é negativo!\n");
    }else{
        int r_fat = c_fat(numero);
        printf("O fatorial de %d é %d!\n", numero, r_fat);
    }
    return 0;
}
