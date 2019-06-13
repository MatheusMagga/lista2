#include <stdio.h>
#include <string.h>
void main() {
    char str1[50], str2[50];
    int i, j = 0;
    gets(str1);
    for(i = (strlen(str1) - 1); i >= 0; i--) {
        str2[j] = str1[i];
        j++;
    }
    str2[j] = 0;
    printf("String invertida: %s\n", str2);
}
