#include <stdio.h>

int main(){
	int price,result,date;
	scanf("%d", &price);
	scanf("%d", &date);
	
	if(price >= 50000){
		result = price - (0.01 * date * price);
	}else result = price;
	printf("%d\n", result);
	return 0;
	
	
}
