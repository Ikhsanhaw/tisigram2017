#include <stdio.h>

int main() {
	// freopen("A.in", "r", stdin);

	char* score[] = {"E", "E+", "D-", "D", "D+", "C-", "C", "C+", "B-", "B", "B+", "A-", "A", "A+", "S-", "S"};
	char c;

	char s[] = {'E', 'D', 'C', 'B', 'A', 'S'};
	int s_val[] = {0, 3,  6, 9, 12, 15};

	int tot = 0;
	int idx = 0;
	scanf("%c%*c", &c);
	for (idx = 0; idx < 6; ++idx) {
		if (c == s[idx]) {
			// printf("%d\n", s_val[idx]);
			tot += s_val[idx];
		}
	}

	scanf("%c%*c", &c);
	for (idx = 0; idx < 6; ++idx) {
		if (c == s[idx]) {
			// printf("%d\n", s_val[idx]);
			tot += s_val[idx];
		}
	}
	scanf("%c%*c", &c);
	for (idx = 0; idx < 6; ++idx) {
		if (c == s[idx]) {
			// printf("%d\n", s_val[idx]);
			tot += s_val[idx];
		}
	}
	puts(score[tot/3]);
	
	return 0;
}