#include <stdio.h>
 
int main(){
	int N, M1,M2,temp,i,k;
	unsigned long long int hasil=1;
	scanf("%d %d",&N,&M1);
	M2 = N-M1;
	if(M2 > M1){
		temp = M1;
		M1 = M2;
		M2 = temp;
	}
	k=2;
	for(i=0;i<M2;i++){
		hasil = hasil * (N-i);
		while(hasil % k == 0 && k <= M2){
			hasil = hasil / k;
			k++;
		}
	}
	printf("%lld\n",hasil);
	return 0;
}
