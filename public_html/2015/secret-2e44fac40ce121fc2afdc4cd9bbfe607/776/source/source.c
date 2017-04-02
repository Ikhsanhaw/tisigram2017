#include <stdio.h>
#include <string.h>

int main() {
	// freopen("I.in", "r", stdin);

	int nt;
	scanf("%d", &nt);
	while (nt--) {
		char s[105];
		scanf("%100s", s);

		int ans = 0;
		int idx;
		for (idx = 0; idx < strlen(s); ++idx) {
			int i, j;
			if (idx != strlen(s)-1) { // do even length
				i = idx, j = idx+1;
				while (s[i] == s[j]) {
					ans++;
					--i;
					++j;
					if (i < 0)
						break;
					if (j >= strlen(s))
						break;
				}
			}
			// do odd length
			i = idx, j = idx;
			while (s[i] == s[j]) {
				ans++;
				--i;
				++j;
				if (i < 0)
					break;
				if (j >= strlen(s))
					break;
			}

		}
		printf("%d\n", ans);
	}
	
	return 0;
}