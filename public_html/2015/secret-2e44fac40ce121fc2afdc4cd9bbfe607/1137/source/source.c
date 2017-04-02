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
	int n,a[100000],j[100000],i,cek,index,k;
	unsigned long x[100000],tot=0;
	scanf("%d",&n);	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);			
	}
	quick(a,0,n-1);
	index=0;
	x[index]=a[0];
	j[index]=1;
	for(i=1;i<n;i++){
		if(a[i]==a[i-1]){
			j[index]++;
			if(x[index]<j[index]){
						printf("-1\n");
					return 0;
			}
		}else{
			index++;
			j[index]=1;
			x[index]=a[i];
		}
	}
	int l;
	for(l=0;l<=index;l++){
		tot+= x[l];
	}
	printf("%lu\n",tot);
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
