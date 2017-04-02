#include <stdio.h>

int main(){
	int N,j,i,k,count=0,cek,hasil=0;
	scanf("%d",&N);
	long int a[N];
	for(i=0;i<N;i++){
		scanf("%li",&a[i]);
	}
	
	for(i=0;i<N;i++){
		cek = a[i];
		count = 1;
		if(cek!=0){
			for(j=0;j<N;j++){
				if(cek==a[j]&&i!=j){
					count++;
				}
			}
			if (count>cek){
				hasil=-1;
				printf("%d\n",hasil);
				i=N;
				j=N;
			}
			else{
				for(k=0;k<N;k++){
					if(cek==a[k]&&i!=k){
						a[k]=0;
					}
				}
				hasil=hasil+cek;
			}
		}
	}
if (hasil!=-1){
	printf("%d\n",hasil);	
}
return 0;
}
