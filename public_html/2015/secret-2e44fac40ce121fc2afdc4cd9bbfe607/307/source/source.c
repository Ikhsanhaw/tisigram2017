#include <stdio.h>

int main(){
	char kar;
	scanf("%c",&kar);
	if(kar=='A'||kar=='a'||
	kar=='I'||kar=='i'||
	kar=='U'||kar=='u'||
	kar=='E'||kar=='e'||
	kar=='O'||kar=='o'){
		printf("True\n");
	}else{
		printf("False\n");
	}
	return 0;
}
