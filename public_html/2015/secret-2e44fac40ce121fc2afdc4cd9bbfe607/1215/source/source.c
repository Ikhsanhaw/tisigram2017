#include<stdio.h>
int main(){
	int x,y,r,xs,ys;
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&r);
	scanf("%d",&xs);
	scanf("%d",&ys);
	if(x==xs && y==ys){
		printf("tepat pada titik tengah arena pertandingan\n");
	}else if(((xs>(x+r)) ||(xs<(x-r)))|| ((ys>(y+r))||(ys<(y-r))))
	{
		printf("di luar arena pertandingan\n");		
	}else if(xs==(x+r) ||xs==(x-r)|| ys==(y+r)||ys==(y-r)){
			printf("tepat pada batas arena pertandingan\n");
		}else{
			printf("di dalam arena pertandingan\n");					
		} 
	return 0;
}
