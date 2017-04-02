#include <stdio.h>
#include <math.h>

int main(){
	int kelas,max,min, data, range, interval, i;
	scanf("%d", &kelas);
	scanf("%d %d", &max, &min);
	range=max-min;
	interval = ceil(range/kelas);
	for(i=0; i<kelas; i++){
		max = min + interval;
		printf("%d - %d\n", min, max);
		min = max+1;
	}
	return 0;
}
