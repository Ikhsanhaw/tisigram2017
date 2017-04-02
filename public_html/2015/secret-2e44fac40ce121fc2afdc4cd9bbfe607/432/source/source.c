#include <stdio.h>
#include <stdbool.h>
int main(){
	int n,i,j,testcase,nilai;
	
	scanf("%d",&n);
	bool remedial[n];
	
	for(i=0;i<n;i++){
		scanf("%d",&testcase);
		remedial[i]=false;
		for(j=0;j<testcase;j++){
			scanf("%d",&nilai);
			if(nilai<60){
				remedial[i]=true;
			}
		}
	}
	
	for(i=0;i<n;i++){
		if(remedial[i]==true){
			printf("anda harus remedial\n");
		}else{
			printf("lulus\n");
		}
	}
}
