 #include<stdio.h>
 #include<math.h>
 #include<string.h>
 
 int main(){
 	 int T;
 	 int N;
 	 float A[10][8], hasil[10], pembagi;
 	 int i,j;
 	 scanf("%d",&T);
 	 for(i=0;i<T;i++){
	  scanf("%d",&N);
	  hasil[i]=0;
	  pembagi=0;
	  for(j=0;j<N;j++){
 	  	scanf("%f",&A[i][j]);
 	  	pembagi= pembagi+1;
 	  	hasil[i]= hasil[i]+A[i][j];
   	  }
   	  hasil[i]= hasil[i]/pembagi;
	 }
	 for(i=0;i<3;i++){
  	 printf("%.2f\n",hasil[i]);
	   }
      system("pause");
      return 0;
 }
	 
