#include <stdio.h>

int main(){
	int a,b,h,j;
	bool n,t;
	j=0;
	t=true;
	scanf("%d %d %d",&a,&b,&h);
	
	if (a>b){
	
	while (h>0){
	
	if (t==true){
		t=false;
		h=h-a;
		n=true;
		j++;
	}
	else if (n==true){
		n=false;
		h=h+b;
		t=true;
	}
	}
	printf("%d\n",j);
}
	else{
		printf("mustahil\n");
	}
	return 0;
}
