#include <stdio.h>
//Função para converter Decimal para Binário
long long converterParaB(int valor_decimal){
    long long valor_binario = 0;
    int resto, sequencial = 1;
    while (valor_decimal != 0){
        resto = valor_decimal % 2;
        valor_decimal /= 2;
        valor_binario += resto * sequencial;
        sequencial *= 10;
    }
    return valor_binario;
}
void main(){
    long long valor_binario;
    int valor_decimal, cociente;
    printf("Digite o numero decimal: ");
    scanf("%d", &valor_decimal);
    printf("[%d] em decimal = [%lld] em binario\n", valor_decimal, converterParaB(valor_decimal));
}