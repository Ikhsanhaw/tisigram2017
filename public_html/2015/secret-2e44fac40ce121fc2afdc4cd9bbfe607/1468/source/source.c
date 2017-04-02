#include <stdio.h>

int main() {
	
	int n, m, o, p;
	
	scanf("%d\n%d", &n, &m);
	
	if(m != 0) {	
		o = n / m;
		p = n % m;

		printf("%d %d\n", o, p);
	}else{
		printf("0 %d\n", p);
	}
	
	return 0;
}
