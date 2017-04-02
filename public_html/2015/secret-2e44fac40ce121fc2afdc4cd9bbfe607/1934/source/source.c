#include <stdio.h>


int main(){
    
    //kamus
    int a,b,h;
    int flag;
    int jarak;
    int hari;
    
    flag = 0;
    jarak = 0;
    hari = 0;
    scanf("%d ",&a);
    scanf("%d ",&b);
    scanf("%d",&h);
    while (flag == 0){
        if (jarak < h){
           hari++;
           if (hari % 3 == 0  ){
                    jarak = jarak + (a * 3) - b;
                    }

           else if (hari % 5 == 0  ){
                    jarak = jarak + a - (b * 2);
                    }
           else{
                jarak = jarak + a - b;     
                }
            
           
           }
           if (jarak >= h){
                     flag =1;
           
                     }
           
        if (jarak < 0){
           goto finish;
        }
        }
        finish:
        if (jarak < 0){
           printf("mustahil\n");
        } else
        printf("%d\n",hari - 1);
    return 0;
    
    }
