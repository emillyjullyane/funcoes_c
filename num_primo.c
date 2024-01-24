#include <stdio.h>
#include <locale.h>

int primo_ou_nao(int n){
    if(n == 2){
        return 1;
    }else if(n <= 1 || (n % 2) == 0){
        return 0;
    }else{
        for(int i = 3; i * i <= n; i += 2){
            if (n % i == 0){
                return 0;
            }
        }
        return 1;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int num;
    printf("---- Verificação de números PRIMOS ----\n");
    printf("Digite um número: ");
    scanf("%d",&num);
    
    if(primo_ou_nao(num)){
        printf("O número %d é primo!\n", num);
    } else {
        printf("O número %d não é primo!\n", num);
    }
    return 0;
}
