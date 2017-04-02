    #include <stdio.h>
    #include <string.h>
     
    int main(){
    	int i,j,n;
    	scanf("%d",&n);
    	int A[n][n];
    	for(i=0;i<n;i++){
    		for(j=0;j<n;j++){
    			scanf("%d",&A[i][j]);
			}
		}
		int count=0;
		for(i=0;i<n;i++){
    		for(j=0;j<n;j++){
    			if(A[i][j] % 6 == 0){
    				count++;
				}
			}
		}
		printf("%d\n",count);
		return 0;
	}
