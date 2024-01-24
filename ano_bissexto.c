#include <stdio.h>
#include <locale.h>

int c_anoB(int anoB){
    if(anoB % 4 == 0 && anoB % 100 != 0){
        printf("O ano %d é BISSEXTO!\n",anoB);
    }else{
        printf("O ano %d é NÃO é BISSEXTO!\n",anoB);
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int ano;
    printf("---- ANO BISSEXTO OU NÃO ----\n");
    printf("Digite um ano: ");
    scanf("%d",&ano);
    
    c_anoB(ano);
    
    return 0;
}
