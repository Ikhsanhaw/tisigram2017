#include<stdio.h>
#include<string.h>
int main(){
	char c[50],d[50];
	int i,x;
	scanf("%d",&i);
	for(x=0;x<i-1;x++){
	scanf("%s",&c);
	
//	for(i=0;i<strlen(c);i++)
//	{
//		if((c[i]%2)==0){
//		d[i]=c[i];
//		}	
//	}
//	}
	for(i=0;i<strlen(c);i++)
	{
		if((c[i]%2)==0){
			printf("%c",c[i]);
		}	
	}
	printf("\n");
}
	return 0;
}

