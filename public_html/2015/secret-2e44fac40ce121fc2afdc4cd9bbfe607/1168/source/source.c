#include <stdio.h>

int main(){
	int n,a,b;
	scanf("%d",&n);
	int matriks[100][100], jml[100];
	int i,j,k;
	int max[100];
	int win[100];
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		for(j=0;j<100;j++){
			jml[j]=0;
		}
		for(j=0;j<b;j++){
			for(k=0;k<a;k++){
				scanf("%d",&matriks[j][k]);
				jml[k]+=matriks[j][k];
			}
		}
		max[i]=jml[0];
		win[i]=1;
		for(j=1;j<a;j++){
			if(max[i]<jml[j]){
				max[i]=jml[j];
				win[i]=j+1;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",win[i]);
	}
	
	
}