/*
Program 	 	 : _Fathin.c
Deskripsi 	 	 :
Author           : Muhammad Ridwan Fathin
Compiler         : Dev-C++ 5.7.1
Tanggal/Version  : 2016/ v1.0
Waktu pengerjaan :
*/

#include <stdio.h>
void quick(int a[],int lower,int upper);
int partition(int a[],int lower,int upper);

int main(){
	int t,n,r,bol[60000],per,p,i,j,max,min;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d",&n,&r);
		for(j=0;j<n;j++){
			scanf("%d",&bol[j]);
		}
		quick(bol,0,n-1);
		max=n-1;
		min=0;
		for(j=0;j<r-1;j++){
			scanf("%d",&per);
			if(per==1){
				printf("%d ",bol[max]);
				max--;
			}else{
				printf("%d ",bol[min]);
				min++;
			}
		}
			scanf("%d",&per);
			if(per==1){
				printf("%d\n",bol[max]);
				max--;
			}else{
				printf("%d\n",bol[min]);
				min++;
			}
	}	
return 0;
}
void quick(int a[],int lower,int upper)
    {
       int loc;
       if(lower<upper)
       {
        loc=partition(a,lower,upper);
        quick(a,lower,loc-1);
        quick(a,loc+1,upper);

       }
    }

    /* Return type: int
      Parameters passed: Unsorted array and its lower and upper bounds */

    int partition(int a[],int lower,int upper)
    {
      int pivot,i,j,temp;
      pivot=a[lower];
      i=lower+1;
      j=upper;
      while(i<j)
        {
            while((i<upper)&&(a[i]<=pivot))
            i++;
            while((a[j]>pivot))
            j--;
            if(i<j)
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }

        }//end while

        if(pivot>a[j])
        {
             temp=a[j];
             a[j]=a[lower];
             a[lower]=temp;
        }

         return(j);

}//end partition
