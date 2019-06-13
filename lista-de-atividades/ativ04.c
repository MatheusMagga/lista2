#include <stdio.h>
#include <math.h>
void main(){
    float continuar = 1, numeros, resposta, mediaP = 0, media, variP, desvio;
    int cont = 0, num[cont], aux = 0, num1[aux], aux1;
    //loop para conseguir os números de forma iterativa
    while(continuar){
        printf("INSIRA UM NUMERO: ");
        scanf("%f", &numeros);
        num[cont] = numeros;
        cont++;
        printf("INSIRIR MAIS UM NÚMERO Sim(1) ou Não(0)?");
        scanf("%f", &resposta);
        if(resposta == 1){
            continuar = 1;
        }else if(resposta == 0){
            continuar = 0;
        }
    }
    aux = cont;
    aux1 = cont;
    //loop para conseguir a soma de todos os numeros 
    while(cont > 0){
        mediaP += num[cont-1];
        cont--;
    }
    media = mediaP/aux;
    //loop para conseguir a variancia parcial
    while(aux > 0){
        variP += pow((num[aux-1]-media), 2);
        aux--;
    }
    desvio = sqrt(variP/aux1);
    printf("A MÉDIA É %'.0f E O DESVIO PADRÃO É %'.3f\n", media, desvio);
}