#include <stdio.h>

int main(){
	int N,M,H;
	scanf("%d",&N);
	scanf("%d",&M);
	scanf("%d",&H);
	
	int hari=0;
	int jarak=0;
	if(N-M<=0 && N-H<0){
		printf("mustahil\n");
	}else{
		while(jarak<H){
			hari++;
			if(hari%3==0){
				jarak = jarak + N*3;
			}
			if(hari%5==0){
				jarak = jarak - M*2;
			}
			if(hari%3!=0 && hari%5 !=0){
				jarak = jarak +N;
				if(jarak>=H){
					break;
				}else{
					jarak = jarak -M;
				}
			}
		}
		printf("%d\n",hari);
	}
}

//done
