#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef char string[105];
bool isPalindrom(char text[],int left, int right);

int main(){
	int T,i,j;
	scanf("%d",&T);
	while(T--){
		string text;
		scanf("%s",text);
		int count = 0;	
		for ( i = 0 ; i < strlen(text) ; i++ ) {
			for ( j = 0 ; j < strlen(text); j++ ){
				count += isPalindrom(text,j,j+i);
			}
		}
		printf("%d\n",count);
	}
	return 0;
}

bool isPalindrom(char text[],int left, int right){
	while (left < right ){
		if (text[left++]!=text[right--])
			return false;
	}
	return true;
}