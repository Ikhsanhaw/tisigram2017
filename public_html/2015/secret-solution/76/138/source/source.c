#include<stdio.h>
#include<string.h>

int main(){
	int turn,M,N,O,i,j,k,mati=0;
	char action[3][20];
	
	strcpy(action[0],"Hit");
	strcpy(action[1],"MegaPotion");
	strcpy(action[2],"MegaPhoenixDown");
	scanf("%d",&turn);
	char action2[turn][20];
	scanf("%d %d %d",&M,&N,&O);
	
	for(j=0;j<turn;j++){
		scanf("%s",action2[j]);
	}
	
	j=0;
	while((j<turn) && mati==0){

		if(strcmp(action[0],action2[j])==0){
			M=M-70;
			if(M<0){
				M=0;
			}
			N=N-70;
			if(N<0){
				N=0;
			}
			O=O-70;
			if(O<0){
		    	O=0;
			}
			
		}
		
		if(strcmp(action[1],action2[j])==0){
			M=M+100;
			if(M>150){
				M=150;
			}
			N=N+100;
			if(N>150){
				N=150;
			}
			O=O+100;
			if(O>150){
				O=150;
			}		
			
		}
		
		if(strcmp(action[2],action2[j])==0){
			if(M==0){
				M=50;
			}
			if(N==0){
				N=50;
			}
			if(O==0){
				O=50;
			}			
		}
	if(M==0 || N==0 || O==0){
			mati=1;
		}
	if(mati==1){
	printf("%d %d %d",M,N,O);
	printf("\ngame over");
    }else{
   	printf("%d %d %d",M,N,O);
    }
	if(j!=turn-1){
		printf("\n");
	}
	j++;
		
	}
	

	printf("\n");
	return 0;
}
