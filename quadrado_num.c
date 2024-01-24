#include <stdio.h>
#include <locale.h>

int quadrado(int n1){
    return (n1*n1);
}

int main() {
    setlocale(LC_ALL, "PT-BR");
    char continuar;
    
    printf("---- O quadrado de um número ----\n");
    
    do{
        int num, quad;
        printf("Digite um número: ");
        scanf("%d",&num);
        
        quad = quadrado(num);
        
        printf("O quadrado do número %d é: %d\n\n", num, quad);
        
        printf("Deseja calcular o quadrado de outro número? (S/N): ");
        scanf(" %c", &continuar);
        
    }while (continuar == 'S' || continuar == 's');    
    return 0;
}