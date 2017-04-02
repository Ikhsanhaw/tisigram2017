#include <stdio.h>

int main(){
	int a,b,c;//r=x^2+y^2
	int d,e;
	scanf("%d %d",&a,&b);
	scanf("%d",&c);
	scanf("%d %d",&d,&e);
	int f=a-d;
	int g=b-e;
	int h=f*f+g*g;
	
	if(h==c*c){
		printf("tepat pada batas arena pertandingan\n");
	}else if(h==0){
		printf("tepat pada titik tengah arena pertandingan\n");
	}else if(h>c*c){
		printf("di luar arena pertandingan\n");
	}else{
		printf("di dalam arena pertandingan\n");
	}
	
	return 0;
}
