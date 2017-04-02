#include <stdio.h>

int main() {
	
	int n, m, o, p;
	
	scanf("%d\n%d", &n, &m);
	
	if(m != 0) {	
		o = n / m;
		p = n % m;

		printf("%d %d", o, p);
	}else{
		printf("0 0");
	}
	
	return 0;
}
