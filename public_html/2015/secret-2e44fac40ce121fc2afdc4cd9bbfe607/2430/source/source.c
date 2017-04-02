#include <stdio.h>

long long fact(int n) {
	if (n == 0) return 1;
	else if (n == 1) return 1;
	else return (n*fact(n-1));
}

long long fact1(int a, int b) {
	if (b == a) return 1;
	else return (b * fact1(a, b-1));
}

int main() {
	int n, m;
	scanf("%d %d", &m, &n);
//	int a[m+1]; int b[n+1];
	long long a = fact1(n, m) / fact(n);
	//(long long) (fact(m) / fact(n)) / fact(m-n);
	printf("%lld\n", a);

/*
	int mulai = n;
	int start = n;
	
	for (int i = 0; i < m-n; i++) {	 
		a[i] = mulai+1;
		mulai++;
		printf("%d\n", a[i]);
	}
	for (int i = 0; i < n; i++) {
		b[i] = start;
		printf("%d\n", b[i]);
		start--;
	}
	for (int i = 0; i < m-n; i++) {
		for(int j = 0; j < n; j++) {
			if (a[i] % b[j] == 0) {
				a[i] = a[i] / b[j];
				b[j] = 1;
			}
		}
		printf("%d\n", a[i]);printf("%d\n", b[i]);
	}
	long int kali, kali1 = 1;
	for (int i = 0; i < m-n; i++) {
		kali *= a[i];
	}
	for(int j = 0; j < n; j++) {
		kali1 *= b[j];
	}
	printf("%ld", kali/kali1); */
	return 0;
}