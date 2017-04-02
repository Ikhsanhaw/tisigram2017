#include <stdio.h>
#include <math.h>

int main(){
	int kelas,max,min, data, range, interval, i;
	scanf("%d", &data);
	scanf("%d %d", &max, &min);
	kelas = ceil(1 + 3.33 * log10(data));
	range=max-min;
	interval = ceil(range/kelas);
	for(i=0; i<kelas; i++){
		max = min + interval;
		printf("%d - %d\n", min, max);
		min = max+1;
	}
}
