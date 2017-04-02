#include <stdio.h>

int main(){
	char a;
	scanf("%c", &a);
	if(a=='A' || a=='I' || a=='U' || a=='E' || a=='O' || a=='a' || a=='i' || a=='u' || a=='e' || a=='o'){
		printf("True\n");
	} else {
		printf("False\n");
	}
	return 0;
}

