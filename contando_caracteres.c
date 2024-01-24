#include <stdio.h>
#include <locale.h>
#include <string.h>

int qt_caracteres(const char *frase){
    int cont = 0;
    for(int i = 0; frase[i] != '\0'; i++){
        if(frase[i] != ' '){
            cont++;
        }
    }
    return cont;
}

int main() {
    setlocale(LC_ALL, "PT-BR");

    char frase[100];
    printf("---- Verificação da quantidade de caracteres ----\n");
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';

    int total = qt_caracteres(frase);
    printf("A frase digitada possui %d caracteres!\n", total);

    return 0;
}
