#include <stdio.h>


int main(){
    
    //kamus
    int a,b,h;
    int flag;
    int jarak;
    int hari;
    
    flag = 0;
    jarak = 0;
    hari = 1;
    scanf("%d ",&a);
    scanf("%d ",&b);
    scanf("%d",&h);
    while (flag == 0){
        if (jarak < h){
           
           if (hari % 3 == 0  && hari != 0 ){
                    //siang
                    jarak = jarak + (a * 3);
                    //cek
                    if (jarak >= h){
                       flag =1;
                       goto end;
                     }
                    //malam
                    jarak = jarak - b;
                     if (jarak >= h){
                       flag =1;
                       goto end;
                     }
                    hari++;
                    }

           else if (hari % 5 == 0 && hari != 0 ){
                    //siang
                    jarak = jarak + a;
                    //cek
                    if (jarak >= h){
                       flag =1;
                       goto end;
                     }
                    //malam
                    jarak = jarak  - (b * 2);
                     if (jarak >= h){
                       flag =1;
                       goto end;
                     }

                    hari++;
                    }
           else{
                //siang
                jarak = jarak + a;     
                //cek
                    if (jarak >= h){
                       flag =1;
                       goto end;
                     }
                //malam
                jarak = jarak - b;
                 if (jarak >= h){
                       flag =1;
                       goto end;
                     }
                hari++;
                }
                end:
                if (jarak >= h){
                       flag =1;
                      
                     }
           }

         

        if (jarak < 0){
           goto finish;
        }
        }
        finish:
        if (jarak < 0){
           printf("mustahil\n");
        } else
        printf("%d\n",hari );

    return 0;
    
    }
