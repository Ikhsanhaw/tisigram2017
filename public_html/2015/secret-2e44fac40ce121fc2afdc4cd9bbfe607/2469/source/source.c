 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 int permutasi(int N);
 int main(){
 	 int A,B;
 	 scanf("%d %d",&A,&B);
 	 printf("%d\n",permutasi(A)/(permutasi(A-B)*permutasi(B)));
 	 //system("pause");
      return 0;
 }
int permutasi(int N){
	if(N==1){
	 return 1;
	 }
	 else{
	 return N * permutasi(N-1);
	 	  }
	}
