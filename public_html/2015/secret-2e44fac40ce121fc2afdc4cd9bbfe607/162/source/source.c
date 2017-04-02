#include <stdio.h>

int main(){
	int harga, date;
	scanf("%d %d", &harga, &date);
	if(harga >= 50000){
		harga = harga - (date*harga/100);
	}
	printf("%d\n", harga);
	return 0;
}
