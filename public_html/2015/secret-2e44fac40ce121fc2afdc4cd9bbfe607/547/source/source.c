#include <stdio.h>

int main(){
	int n1,n2,i,j;
	int status;
	
	typedef struct word{
	int value[100];
}words;
	
	scanf("%d",&n1);
	words A[n1];
	
	for(i=0;i<n1;i++){
		printf("jumlah");
		scanf("%d", &n2);
		fflush(stdin);
		printf("isi nilai");
		A[i].value[0]=n2;
		for(j=1;j<=n2;j++){
			fflush(stdin);
			scanf("%d", &A[i].value[j]);
			fflush(stdin);	
		}
		
		
	}
		status=0;
		for(i=0;i<n1;i++){

		for(j=1;j<=(A[i].value[0]);j++){
			if(A[i].value[j] < 60){
				status=1;
			}

		}
		if(status==1){
			
		printf("anda harus remedial\n");
		}else printf("lulus\n");	
		
		
	}
	return 0;	
}
