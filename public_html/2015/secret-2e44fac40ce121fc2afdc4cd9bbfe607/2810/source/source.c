#include<stdio.h>

int gcd(int a,int b);

int main(){
	int X,a,b,c,h,l,m;
	scanf("%d",&X);
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	h=(a*b)/gcd(a,b);
	l=(h*c)/gcd(h,c);
	m=X-X%l;
	printf("%d %d\n",m,m+l);
	
	return 0;
}

int gcd(int a,int b){
	int r;
	while(b){
		r=b;
		b=a%b;
		a=r;
	}
	return r;
}
