#include <stdio.h>
#include <string.h>
int main() {
	// freopen("C.in", "r", stdin);
	int nt;
	scanf("%d", &nt);
	while (nt--) {
		char s[1005];
		scanf("%1000s", s);
		int it;
		for (it = 0; it < strlen(s); ++it) {
			if (s[it]%2 == 0) {
				printf("%c", s[it]);
			}
		}
		printf("\n");
	}
	return 0;
}