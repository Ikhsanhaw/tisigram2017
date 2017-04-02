#include<stdio.h>
#include<string.h>
 
int main(){
	int i=0,la=-1,lb=-1;
	char s[30];
	char a[2],c;
	gets(s);
	scanf("%s",&a);
	while(i<strlen(s)){
		if((s[i]==a[0])&&(la==-1)){
			la=i;
		}
		if((s[i]==a[1])&&(lb==-1)){
			lb=i;
		}
		if((la!=-1)&&(lb!=-1)){
			s[lb]=a[0];
			s[la]=a[1];
			la=-1;
			lb=-1;
		}
		i++;
	}
	
	printf("%s\n",s);
	return 0;
}
