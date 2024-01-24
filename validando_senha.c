#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int verificacao(char senha[]){
    int comprimento = strlen(senha);
    
    if (comprimento < 8) {
        printf("A senha deve ter no mínimo 8 caracteres.\n");
        return 0;
    }
    
    int l_maiuscula = 0;
    int l_minuscula = 0;
    int c_especial = 0;
    int numero = 0;
    
    for (int i = 0; i < comprimento; i++) {
        if (isupper(senha[i])) {
            l_maiuscula = 1;
        }else if (islower(senha[i])){
            l_minuscula = 1;
        }else if (isdigit(senha[i])){
            numero = 1;
        }else{
            c_especial = 1;
        }
    }
    return (l_maiuscula && l_minuscula && numero && c_especial);
}
int main() {
    setlocale(LC_ALL, "PT-BR");
    char senha[100];
    
    printf("---- Verificação de senha ----\n");
    printf("Digite uma senha de sua preferência: ");
    scanf("%s", senha);

    if (verificacao(senha)) {
        printf("Senha válida!\n");
    } else {
        printf("Senha fraca. Tente novamente.\n");
    }
    return 0;
}