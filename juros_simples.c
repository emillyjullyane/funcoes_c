#include <stdio.h>
#include <locale.h>

float c_montante(float principal, float taxa_juros, float tempo){
    return (principal * (1 + (taxa_juros / 100) * tempo));
}

int main() {
	setlocale(LC_ALL, "Portuguese");

    float prin, tx_juros, tempo, mont;

    printf("----- Cálculo de Juros Simples -----\n");

    printf("Digite o valor principal: ");
    scanf("%f", &prin);

    printf("Digite a taxa de juros (em porcentagem): ");
    scanf("%f", &tx_juros);

    printf("Digite o tempo (em anos): ");
    scanf("%f", &tempo);

    mont = c_montante(prin, tx_juros, tempo);

    printf("\nO montante total é: %.2f\n", mont);

    return 0;
}
