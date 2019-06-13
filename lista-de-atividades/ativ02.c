#include <stdio.h>
#include <time.h>
void main(){
	int dia, mes, ano, diatotal;
	printf("INSIRA O DIA\n");
	scanf("%d", &dia);
	printf("AGORA O MÊS\n");
	scanf("%d", &mes);
	printf("POR FIM O ANO\n");
	scanf("%d", &ano);

	time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);
	
	int anototal = ((tm.tm_year + 1900) - ano)*365;
	int mestotal = ((tm.tm_mon)*30)+tm.tm_mday;
	if (mes == 1){
		 diatotal = dia;
	}else{
		 diatotal = ((mes-1)*30)+dia;
	}
	int TOTAL = anototal + mestotal - diatotal;

	printf("VOCÊ VIVEU %d DIAS!!!\n", TOTAL);

} 