#include <stdio.h>

int main(){
	int spirit, M, N, O, total;
	int str = 15, spd = 10, stm = 12;
	scanf("%d %d %d", &M, &N, &O);
	if(M>str) M=str;
	if(N>spd) N=spd;
	if(O>stm) O=stm;
	spirit = ((str-M)*6) + ((spd-N)*5) + ((stm-O)*4);
	total = spirit/12;
	if((spirit - total) != 0) total+=1;
	printf("%d\n", total);
}
