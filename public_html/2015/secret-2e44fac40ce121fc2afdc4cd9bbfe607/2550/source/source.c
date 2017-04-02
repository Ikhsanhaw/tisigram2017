/*
Program 	 	 : _Fathin.c
Deskripsi 	 	 :
Author           : Muhammad Ridwan Fathin
Compiler         : Dev-C++ 5.7.1
Tanggal/Version  : 2016/ v1.0
Waktu pengerjaan :
*/

#include <stdio.h>
void quicksort(unsigned long x[],int first,int last);
int main(){
	int t,n,m,i,j,count1,count2;
	unsigned long p1[20001],p2[20001];
	unsigned long long pay;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&m);
		count1=0;
		count2=0;
		pay=0;
		for(i=0;i<n;i++){
			scanf("%lu",&p1[i]);
		}
		for(j=0;j<m;j++){
			scanf("%lu",&p2[j]);
		}
		if(n>m){
			printf("Muntu kalah\n");
		}else{
			quicksort(p1,0,n-1);
			quicksort(p2,0,m-1);
			while(count1<n && count2<m){
				if(p1[count1]<=p2[count2]){
					count1++;
					pay+=p2[count2];
					count2++;
				}else{
					count2++;
				}
			}
			if(count2==m && count1<n){
				printf("Muntu kalah\n");
			}else{
				printf("%llu\n",pay);
			}
			
		}
	}
	return 0;
}
void quicksort(unsigned long x[],int first,int last){
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
