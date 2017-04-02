#include<stdio.h>
main(){
	int o,oo,r,q,w;
	scanf("%d%d%d%d%d",&o,&oo,&r,&q,&w);
	if(o==q&&oo==w){
		printf("tepat pada titik tengah arena pertandingan\n");
	}else
	if((q-o)*(q-o)+(w-oo)*(w-oo)==r*r){
		printf("tepat pada batas arena pertandingan\n");
	}else
	if((q-o)*(q-o)+(w-oo)*(w-oo)<r*r){
		printf("di dalam arena pertandingan\n");
	}else printf("di luar arena pertandingan\n");
}
