#include<stdio.h>
#include<string.h>

int main(){
	int i,j,n,mats,jml;
	scanf("%d",&n);
	jml=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&mats);
			if (mats%6==0){
				jml++;
			}
		}
	}
	printf("%d\n",jml);
	return 0;
}
