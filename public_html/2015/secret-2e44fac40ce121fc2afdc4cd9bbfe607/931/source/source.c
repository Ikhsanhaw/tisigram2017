#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int T;
	scanf("%d",&T);
	int i;
	for (i=0; i<T; i++) {
		char string[100];
		scanf("%s",&string);
		int len = strlen(string);
		int it;
		int total = 0;
		for (it=1; it<=len; it++) {
			int panjang = it;
			int idx = 0;
			while (idx<len) {
				int start = idx;
				int end = start+panjang-1;

				//check palindrome
				if (end<len) {
					//int x;
					//for (x=start; x<=end; x++) { printf("%c",string[x]); }
					//printf("\n");
					int isPalindrome = 1;
					while (start<end) {
						if (string[start]!=string[end]) {
							isPalindrome = 0;
							break;
						}
						start++;
						end--;
					}

					if (isPalindrome==1) {
						total++;
					}
				}

				idx++;
			}
		}
		printf("%d\n",total);
	}
	return 0;
}