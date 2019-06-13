
#include <stdio.h>
void main(){
    float x, y;
    printf("Insira o X: ");
    scanf("%f", &x);
    printf("Insira o Y: ");
    scanf("%f", &y);
    if(x > 0 && y > 0){
        printf("O PONTO ESTÁ NO 1º QUADRANTE\n");
    }else if(x > 0 && y < 0){
        printf("O PONTO ESTÁ NO 4º QUADRANTE\n");
    }else if(x < 0 && y < 0){
        printf("O PONTO ESTÁ NO 3º QUADRANTE\n");
    }else if(x < 0 && y > 0){
        printf("O PONTO ESTÁ NO 2º QUADRANTE\n");
    }else{
        printf("O PONTO NÃO SE EMCONTRA EM NENHUM QUADRANTE ESPECÍFICO\n");
    }

}