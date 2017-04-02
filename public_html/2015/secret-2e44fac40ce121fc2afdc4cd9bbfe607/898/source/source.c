#include <stdio.h>
#include <string.h>

int fpb(int a, int b){
	if(b==0){
		return a;
	}else{
		fpb(b,a % b);
	}
}
int main(){
	int a,b,f,n;
	scanf("%d",&n);
	while(n>0){
		scanf("%d %d",&a,&b);
		f=fpb(a,b);
		printf("%d/%d\n",b/f,a/f);	
		n--;
	}
return 0;
}


