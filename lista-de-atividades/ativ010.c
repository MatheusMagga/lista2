#include <stdio.h>
void soma(int* a, int* b, int* c){
    *c = *a + *b;
}
void sub(int* a, int* b, int* c){
    *c = *a - *b;
}
void mult(int* a, int* b, int* c){
    *c = *a * *b;
}
void divi(int* a, int* b, int* c){
    *c = *a / *b;
}
void main(){
    int a, b, c, esc;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("(1) PARA SOMAR\n(2) PARA SUBTRAIR\n(3) PARA MULTIPLICAR\n(4) PARA DIVIDIR\n");
    scanf("%d", &esc);
    if(esc == 1){
        soma(&a, &b, &c);
        printf("Soma é: %d\n", c);
    }else if(esc == 2){
        sub(&a, &b, &c);
        printf("Soma é: %d\n", c);
    }else if(esc == 3){
        mult(&a, &b, &c);
        printf("Soma é: %d\n", c);
    }else if(esc == 4){
        divi(&a, &b, &c);
        printf("Soma é: %d\n", c);
    }else{
        printf("Operador não exstente!");
    }
}