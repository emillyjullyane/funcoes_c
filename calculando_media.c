#include <stdio.h>

float c_mediaATV(float escrita, float pratica, float NAP, float NAF) {
    return (escrita + pratica + ((NAF*10)/NAP))/3;
}

float c_mediaGER(float mb1, float mb2, float mb3, float mb4) {
    return (mb1+mb2+mb3+mb4)/10;
}

int main(){
    printf("---- EEMTI Maria Dolores Albuquerque ----\n");
    printf("-------- Calculo de  media final --------\n");
    
    int i;
    float mb1,mb2, mb3, mb4;
    for(i = 1; i <= 4; i++){
        
        printf("\nAdicione abaixo as notas referentes ao %d° semestre\n", i);
        
        float escrita, pratica, NAP, NAF;
        
        printf("Digite a nota da avalicao escrita: ");
        scanf("%f",&escrita);
        
        printf("Digite a nota da avalicao pratica: ");
        scanf("%f",&pratica);
        
        printf("Digite o numero de atividades passadas pelo professor: ");
        scanf("%f",&NAP);
        
        printf("Digite o numero de atividades feitas: ");
        scanf("%f",&NAF);
        
        
        float media = c_mediaATV(escrita, pratica, NAP, NAF);
        
        if(i==1){
            mb1 = c_mediaATV(escrita, pratica, NAP, NAF)*2;
        }
        if(i==2){
            mb2 = c_mediaATV(escrita, pratica, NAP, NAF)*3;
        }
        if(i==3){
            mb3 = c_mediaATV(escrita, pratica, NAP, NAF)*2;
        }
        if(i==4){
            mb4 = c_mediaATV(escrita, pratica, NAP, NAF)*3;
        }
    }
    printf("\nA media do 1° bimestre é: %.2f\n",mb1);
    printf("A media do 2° bimestre é: %.2f\n",mb2);
    printf("A media do 3° bimestre é: %.2f\n",mb3);
    printf("A media do 4° bimestre é: %.2f\n",mb4);
    
    float mediaG = c_mediaGER(mb1, mb2, mb3, mb4);
    printf("\nA media geral é: %.2f\n", mediaG);

    return 0;
}


