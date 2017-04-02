#include<stdio.h>
void quicksort(int [10],int,int);
int main(){
	int i,x[50005],t,bol,c,pr,tc;
	scanf("%d",&tc);
	while(tc--){
		
	scanf("%d%d",&bol,&pr);c=bol;
	while(c--){
		scanf("%d",&x[c]);
	}
	quicksort(x,0,bol-1);
	--bol;c=0;
	while(pr--){
		scanf("%d",&t);
		if(t){
			printf("%d",x[bol]);
			--bol;
		}else{
			printf("%d",x[c]);
			++c;
		}
		if(pr==0){
			printf("\n");
		}else printf(" ");
	}
	}
	return 0;
}

void quicksort(int x[10],int first,int last){
    int pivot,j,temp,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
}
