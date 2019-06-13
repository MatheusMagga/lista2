#include <stdio.h>
void main(){
    int array[8][8];
    //loop para preencher toda a primeira coluna com 1
    for(int linha = 0; linha < 8; linha++){
        array[linha][0] = 1;
    }
    array[1][1] = 1;
    //loop para preencher o restante da piramide
    for(int linha = 2; linha < 8; linha++ ){
        for(int coluna = 1; coluna <= linha; coluna++){
            if(linha == coluna){
                array[linha][coluna] = 1;
            }else{
                array[linha][coluna] = array[linha-1][coluna-1] + array[linha-1][coluna];
            }
        }
    }
    //loop para mostra a priramide
    for (int linha = 0; linha < 8; linha++){
        for(int coluna = 0; coluna <= linha; coluna++){
            printf("%d ", array[linha][coluna]);
        }
        printf("\n");
    }
}