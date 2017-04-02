#include <stdio.h>

int main(){
	int a,b,c;
	int d,e;
	scanf("%d %d",&a,&b);
	scanf("%d",&c);
	scanf("%d %d",&d,&e);
	
	if(a==d && b==e){
		printf("tepat pada titik tengah arena pertandingan\n");
	}else if(a+c==d || b+c==e){
		printf("tepat pada batas arena pertandingan\n");
	}else if(d>a+c || e>b+c){
		printf("di luar arena pertandingan\n");
	}else{
		printf("di dalam arena pertandingan\n");
	}
	
	return 0;
}
