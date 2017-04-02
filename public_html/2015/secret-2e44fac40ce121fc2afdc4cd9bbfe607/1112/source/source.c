#include <stdio.h>
int hitungfpb(int bilangan1, int bilangan2);

int main(){
	int n, fpb;
	
	scanf("%d", &n);
	
	int bil1[n], bil2[n],i;
	
	for(i=0;i<n;i++){
		scanf("%d %d", &bil1[i], &bil2[i]);
		fpb = hitungfpb(bil1[i],bil2[i]);
		bil1[i] = bil1[i]/fpb;
		bil2[i] = bil2[i]/fpb;
	}
	
	for(i=0;i<n;i++){
		printf("%d/%d\n", bil2[i], bil1[i]);
	}	
	
	return 0;
}

int hitungfpb(int bilangan1, int bilangan2){
	int fpb,i;
	
	i=1;
	while(i<=bilangan1 && i<=bilangan2){
		if(bilangan1%i==0 && bilangan2%i==0){
			fpb = i;
		}
		i++;
	}
	
	return fpb;
}
