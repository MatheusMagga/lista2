#include <stdio.h>
void main(){
    for(int p = 1; p < 10; p++){
        for(int s = 1; s <= 10; s++){
            printf("%dx%d=%d\n",p,s,p*s);
        }
        printf("\n");
    }
}