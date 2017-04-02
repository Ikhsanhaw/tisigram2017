#include<stdio.h>

int main(){
	int a[3][2],i,j,total,sum=0,status;
	for(i=0;i<3;i++){
		scanf("%d %d",&a[i][0],&a[i][1]);
	}
	j=0;
	status=0;
	while((j<3)&&status==0){
		if((a[j][0]>0)&&(a[j][1]>0)){
		
			if(a[j][0]>a[j][1]){
				sum=sum+(a[j][0]-a[j][1]);
			}else{
				sum=sum+(a[j][1]-a[j][0]);
			}	
		}else{
			status=1;
		}
		j++;
	}
	
	if(status==0){
		total=sum;
	}else{
		total=0;
	}
	printf("%d\n",total);
	
	return 0;
}
