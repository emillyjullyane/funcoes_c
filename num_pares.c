#include <stdio.h>
#include <locale.h>

int par_ou_impar(int num){
    return (num & 1);
}

int main() {
    setlocale(LC_ALL, "PT-BR");

    int num;
    printf("---- Par ou Ímpar ----\n");
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    if(par_ou_impar(num)){
        printf("O número %d é ímpar!\n", num);
    }else{
        printf("O numero %d é par!\n", num);
    }
    return 0;
}
