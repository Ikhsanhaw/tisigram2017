#include <stdio.h>

int main(){
	int n,m,H;
	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%d",&H);
	
	int hari=0;
	int jarak=0;
	if((n*3)-2*(m-n)<=0){
		printf("mustahil\n");
	}else{
		while(jarak<=H){
			hari++;
			jarak = jarak +n;
			if(hari%3==0){
				jarak = jarak +n*2;
			}
			if(jarak>H){
				break;
			}
			jarak = jarak -m;
			if(hari%5==0){
				jarak = jarak -m;
			}
			if(jarak<0){
				jarak =0;
			}
		}
		printf("%d\n",hari);	
	}
}

//permukaan = tinggi sumur +1                                                                                                                                                                                                                                                                                                                                              
