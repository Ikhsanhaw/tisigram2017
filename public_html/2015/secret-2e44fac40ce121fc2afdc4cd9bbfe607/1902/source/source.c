#include <stdio.h>

int main(){
	int N,M,H;
	scanf("%d",&N);
	scanf("%d",&M);
	scanf("%d",&H);
	int hari=0;
	int jarak=0;
	if(N-M<0 && N-H<0){
		printf("mustahil\n");
	}else{
		while(jarak<H){
			if(hari%3==0){
				jarak = jarak + N*3;
			}else 
			if(hari%5==0){
				jarak = jarak - N*2;
			}else{
				jarak = jarak + N-M;
			}
			hari++;
		}
		printf("%d",hari);
	}
}
