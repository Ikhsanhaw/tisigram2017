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
                     }
                    //malam
                    jarak = jarak - b;

                    hari++;
                    }

           else if (hari % 5 == 0 && hari != 0 ){
                    //siang
                    jarak = jarak + a;
                    //cek
                    if (jarak >= h){
                       flag =1;
                     }
                    //malam
                    jarak = jarak  - (b * 2);

                    hari++;
                    }
           else{
                //siang
                jarak = jarak + a;     
                //cek
                    if (jarak >= h){
                       flag =1;
                     }
                //malam
                jarak = jarak - b;

                hari++;
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
        printf("%d\n",hari - 1 );

    return 0;
    
    }
