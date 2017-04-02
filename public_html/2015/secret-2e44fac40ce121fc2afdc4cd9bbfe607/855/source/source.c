#include <stdio.h>

int __gcd(int a, int b) {
	if (a >= b) {
		if (b == 0)
			return a;
		return __gcd(b, a%b);
	}
	return __gcd(b, a);
}


int m_date[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int get(int val, int year) {
	if (val != 1) {
		return m_date[val];
	}
	if ((year%400 != 0) && (year%4 == 0)) {
		return 29;
	}
	return 28;
}

int main() {
	// freopen("G.in", "r", stdin);

	char date[15];
	scanf("%13s", date);
	int da = (date[0]-'0')*10+(date[1]-'0');
	int mon = (date[3]-'0')*10+(date[4]-'0');
	int ye = (date[6]-'0')*1000+(date[7]-'0')*100+(date[8]-'0')*10+(date[9]-'0');
	int m, n, o;
	scanf("%d %d %d", &m, &n, &o);
	n = (m*n)/__gcd(m, n);
	o = (o*n)/__gcd(n, o);
	int step = o;

	while (step > 0) {
		if (step <= get(mon-1, ye)-da) {
			da += step;
			step = 0;
		} else {
			step -= get(mon-1, ye)+1-da;
			mon++;
			if (mon == 13) {
				ye++;
				mon = 1;
			}
			da = 1;
		}
	}
	printf("%d/%d/%04d\n", da, mon, ye);
	
	return 0;
}