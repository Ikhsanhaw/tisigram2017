 #include<stdio.h>
 #include<math.h>
 #include<string.h>
 
 int main(){
 	 int T;
 	 int N[10];
 	 float A[10][8], hasil[10], pembagi;
 	 int i,j;
 	 scanf("%d",&T);
 	 for(i=0;i<T;i++){
	  scanf("%d",&N[i]);
	  hasil[i]=0;
	  pembagi=0;
	  for(j=0;j<N[i];j++){
 	  	scanf("%f",&A[i][j]);
 	  	hasil[i]= hasil[i]+A[i][j];
   	  }
	 }
	 for(i=0;i<T;i++){
  	 printf("%.2f\n",hasil[i]/N[i]);
	   }
     // system("pause");
      return 0;
 }
	 
