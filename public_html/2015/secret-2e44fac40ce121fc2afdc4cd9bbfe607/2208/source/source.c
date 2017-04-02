 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 
 int main(){
 	 int T,G[10000],H[10000],L[10000],i,j,hasil;
 	 scanf("%d",&T);
 	 for(i=0;i<T;i++){
	  scanf("%d %d %d",&G[i], &H[i], &L[i]);
	  }
	  for(i=0;i<T;i++){
   	 if(L[i]/10000==4||L[i]/1000==4||L[i]/100==4||L[i]/10==4||L[i]/1==4||L[i]/10000==13||L[i]/1000==13||L[i]/100==13||L[i]/10==13||L[i]/1==13){
	 printf("angka mitos\n");}
	  else{
	 hasil=G[i];
		   for(j=2;j<=L[i];j++){
	  	    	   if(j/10000==4||j/1000==4||j/100==4||j/10==4||j/1==4||j/10000==13||j/1000==13||j/100==13||j/10==13||j/1==13){
			  
			  }
	  else{
	  	   hasil = hasil + H[i];
				 }
	  			   }
	 	 printf("%d\n",hasil) ;
	 }	 
   }
     // system("pause");
      return 0;
 }
