#include <stdio.h>

int main(){
	int N,M,H;
	scanf("%d",&N);
	scanf("%d",&M);
	scanf("%d",&H);
	
	int hari=0;
	int jarak=0;
	if(N-M<=0 && N-H<=0 && N*3<H){
		printf("mustahil\n");
	}else{
		while(jarak<H+1){
			hari++;
			if(hari%3==0){
				jarak = jarak + N*3;
			}
			if(hari%5==0){
				jarak = jarak - M*2;
				if(jarak<0){
					jarak=0;
				}
			}
			if(hari%3!=0 && hari%5 !=0){
				jarak = jarak +N;
				if(jarak>H){
					break;
				}else{
					jarak = jarak -M;
					if(jarak<0){
						jarak=0;
					}
				}
			}
		}
		printf("%d\n",hari);
	}
}

//done
