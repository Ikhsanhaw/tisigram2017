 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 
 int main(){
 	 int H,A,B, hari=1, naik=0;
 	 scanf("%d %d %d",&A,&B,&H);
 	 if(A<B&&H/3>A){
	 	 printf("mustahil\n");
	 	  }
	  else{
 	 while(naik<=H){
	 if(hari%3==0){
  	 naik= naik+ A*3;
	
  	 if(naik<=H){naik = naik - B;}
  	 }
  	 else if(hari%5==0){
	 	  naik= naik - B*2+ A;
		}
	else{
	naik = naik+A-B;
	}
	if(naik<0){naik = 0;}
	//	printf("%d\n",naik);
		if(naik<=H){hari++;}
	}
	printf("%d\n",hari);
	}
      //system("pause");
      return 0;
 }
