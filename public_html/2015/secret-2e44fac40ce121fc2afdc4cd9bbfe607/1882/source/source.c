#include<stdio.h>
int main(){
    int q,w,e,r;
    scanf("%d%d%d%d",&q,&w,&e,&r);
    if((e*q%(q+w)==0)&&(e*w%(q+w)==0)){
                                  printf("%d %d\n",e*w/(q+w),e*q/(q+w));
                                  
                                  }
                                  else
                                  {
                                      printf("mustahil\n");
                                  }
                                  //getch();
    return 0;
}
