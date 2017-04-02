#include <stdio.h>
#include <math.h>

int main(){
	int tukar, i;
	float emas=0;
	
	scanf("%d", &tukar);
	
	for(i=2; i<5; i++){
		if(tukar%i==0){
			emas += (float)tukar/i;
		}else{
			emas += (float)tukar/i;
		}
	}
	
	printf("%0.f\n", floor((double)emas));
	
	return 0;
}
