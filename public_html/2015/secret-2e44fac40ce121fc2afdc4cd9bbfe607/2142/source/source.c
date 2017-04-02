#include<stdio.h>

int main(){
    int a,b,h,temp,count=1;
    
    scanf("%d %d %d",&a,&b,&h);
    
    if(b>a){
       printf("mustahil\n");
    }else{
       while(h!=0){
           temp = (h - a);
           if(temp!=0){
             temp+=b;
             count++;
           }else{
            break;
           }
           h--;
        }
        printf("%d\n",count);      
    }
    //getch();
    return 0;
}
