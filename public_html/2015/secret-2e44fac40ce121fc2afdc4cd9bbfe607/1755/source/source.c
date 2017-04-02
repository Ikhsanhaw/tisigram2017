 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 
 int main(){
 	 int A,i,j;
 	 int B[10][6], hasil[10];
 	 scanf("%d",&A);
 	 for(i=0;i<A;i++){
	  hasil[i]= 0;
	  for(j=0;j<6;j++){
     scanf("%d",&B[i][j]);
     hasil[i]= hasil[i] + B[i][j];
   	  }
	 }
	 for(i=0;i<A;i++){
  	 printf("%d\n",hasil[i]);
	 }
      //system("pause");
      return 0;
 }
