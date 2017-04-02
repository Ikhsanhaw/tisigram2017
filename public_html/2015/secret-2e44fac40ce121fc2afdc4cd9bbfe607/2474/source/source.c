#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
        int tanah;
        int tinggi;
        char lantai[8];
        long int hasil;
} tom ;
int main()
{
    int i, j, kasus, tanah, tinggi, lantai;
    scanf("%d", &kasus);
    tom aria[kasus];
    
    for(i=0 ; i<kasus ; i++){
       scanf("%d %d %s", &aria[i].tanah, &aria[i].tinggi, &aria[i].lantai);        
    }
    
    for(i=0 ; i<kasus ; i++){
       if(strchr(aria[i].lantai, '4') != NULL || strstr(aria[i].lantai, "13") != NULL){
          printf("angka mitos\n");                       
       } else {
          printf("%ld\n", aria[i].tanah + aria[i].tinggi * (atoi(aria[i].lantai)-1));       
       }
    }
    return 0;
}
