#include<stdio.h>
int main(){
	int i,n,f[100],a[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		scanf("%d",&f[i]);
	}
	for(i=1;i<=n;i++){
		while(((a[i]%5==0)&&(f[i]%5==0)) || ((a[i]%2==0)&&(f[i]%2==0)) || ((f[i]%3==0)&&(a[i]%3==0))){
			if(a[i]%5==0 && f[i]%5==0){
				a[i]=a[i]/5;
				f[i]=f[i]/5;
			}
			else if(a[i]%2==0 && f[i]%2==0){
				a[i]=a[i]/2;
				f[i]=f[i]/2;
			}else if(a[i]%3==0 && f[i]%3==0){
				a[i]=a[i]/3;
				f[i]=f[i]/3;
			}
		}
		printf("%d/%d\n",f[i],a[i]);
	}
	return 0;
}
