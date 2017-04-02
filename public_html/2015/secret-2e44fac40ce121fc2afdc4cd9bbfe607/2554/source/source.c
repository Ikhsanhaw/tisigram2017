#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int T;
	scanf("%d", &T);
	struct{
		unsigned long long int n;
		char status[20];
	}A[T];
	for(int i=0; i<T; i++){
		scanf("%lld", &A[i].n);
		if(A[i].n <= (pow(2,64)-1) && A[i].n >0){
			 strcpy(A[i].status ,"true");
		} else strcpy(A[i].status ,"false");
	}
	
	for(int i=0; i<T; i++){
		if(A[i].n <= (pow(2,64)-1) && A[i].n >=0){
			 printf("true\n");
		} else printf("false\n");
	}
	
}
