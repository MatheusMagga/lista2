#include <stdio.h>
void main(){
	int numero;
	printf("INSIRA UM NÚMERO\n");
	scanf("%d", &numero);
	if(numero%2 == 0){
		printf("O NÚMERO %d É PAR.\n", numero);
	}else{
		printf("O NÚMERO %d É IMPAR.\n",numero);
	}
}