#include<stdio.h>
int main(){
	char a;
	scanf("%c",&a);
	
	if(a=='a'||a=='A'||a=='i'||a=='I'||a=='u'||a=='U'||a=='e'||a=='E'||a=='o'||a=='O'){
		printf("True\n");
	}else{
		printf("False\n");
	}
	return 0;
}
