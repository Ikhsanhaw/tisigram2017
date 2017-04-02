#include<stdio.h>
#include<string.h>
int main(){
	char s[120];
	int i;
	gets(s);
	for(i=0;i<strlen(s);i++){
		if(s[i]=='a'||s[i]=='i'||s[i]=='u'||s[i]=='e'||s[i]=='o'){
			printf("%cp%c",s[i],s[i]);
		}
		else{
			printf("%c",s[i]);
		}
		 
	}
	printf("\n");
	return 0;
	
}
