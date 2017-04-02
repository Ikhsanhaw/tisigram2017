 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 
 int main(){
 	 int N,i,j,hasil,hitung;
 	 char A[100][22],d;
 	 scanf("%d",&N);
 	 for(i=0;i<N;i++){
	  scanf("%s",&A[i]);
	  }
	  for(i=0;i<N;i++){
   	  hasil = 0;
   	  hitung = strlen(A[i]);
   	  if(hitung>20){hasil=1;}
   	  else if(hitung==20){
	  	   	for(j=0;j<20;j++){
	  		switch(j){
					case 0 : {if(A[i][j]>'1'){hasil = 1;}}
					case 1 : {if(A[i][j]>'8'){hasil = 1;}}
					case 2 : {if(A[i][j]>'4'){hasil = 1;}}
					case 3 : {if(A[i][j]>'4'){hasil = 1;}}
					case 4 : {if(A[i][j]>'6'){hasil = 1;}}
					case 5 : {if(A[i][j]>'7'){hasil = 1;}}
					case 6 : {if(A[i][j]>'4'){hasil = 1;}}
					case 7 : {if(A[i][j]>'4'){hasil = 1;}}
					case 8 : {if(A[i][j]>'0'){hasil = 1;}}
					case 9 : {if(A[i][j]>'7'){hasil = 1;}}
					case 10 : {if(A[i][j]>'3'){hasil = 1;}}
					case 11 : {if(A[i][j]>'7'){hasil = 1;}}
					case 12 : {if(A[i][j]>'0'){hasil = 1;}}
					case 13 : {if(A[i][j]>'9'){hasil = 1;}}
					case 14 : {if(A[i][j]>'5'){hasil = 1;}}
					case 15 : {if(A[i][j]>'5'){hasil = 1;}}
					case 16 : {if(A[i][j]>'1'){hasil = 1;}}
					case 17 : {if(A[i][j]>'6'){hasil = 1;}}
					case 18 : {if(A[i][j]>'1'){hasil = 1;}}
					case 19 : {if(A[i][j]>'6'){hasil = 1;}}  
				 }
			  }			 
			 }
   	  if(hasil == 0){
	  printf("true\n");
	  }
	  else{
	  	   printf("false\n");
   	  }
	  }
      //system("pause");
      return 0;
 }
