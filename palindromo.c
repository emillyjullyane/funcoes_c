#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int palindromo(char texto[]) {
    int tamanho = strlen(texto);
    int m, n;

    for (m = 0, n = tamanho - 1; m < n; m++, n--) {
        
        while (m < n && isspace(texto[m]))
            m++;
        while (m < n && isspace(texto[n]))
            n--;

        if (tolower(texto[m]) != tolower(texto[n]))
            return 0;
    }

    return 1; 
}
int main() {
    setlocale(LC_ALL, "Portuguese");

    char entrada[100];

    printf("Digite uma palavra ou frase: ");
    fgets(entrada, sizeof(entrada), stdin);

    entrada[strcspn(entrada, "\n")] = 0;

    if (palindromo(entrada))
        printf("É um palíndromo.\n");
    else
        printf("Não é um palíndromo.\n");

    return 0;
}
