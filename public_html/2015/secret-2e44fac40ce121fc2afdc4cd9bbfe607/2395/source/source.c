#include <stdio.h>
#include<string.h>
int main(){
    char x[1010];
    int t,y,cek=0;
    scanf("%d",&t);
    while(t--){
               scanf("%s",&x);
               if(strlen(x)>20) printf("false\n");
               else if(strlen(x)==20){
                    if(x[0]>'1') cek=1;
                    else if(x[1]>'8') cek=1;
                    else if(x[2]>'4') cek=1;
                    else if(x[3]>'4') cek=1;
                    else if(x[4]>'6') cek=1;
                    else if(x[5]>'7') cek=1;
                    else if(x[6]>'4') cek=1;
                    else if(x[7]>'4') cek=1;
                    else if(x[8]>'0') cek=1;
                    else if(x[9]>'7') cek=1;
                    else if(x[10]>'3') cek=1;
                    else if(x[11]>'7') cek=1;
                    else if(x[12]>'0') cek=1;
                    else if(x[13]>'9') cek=1;
                    else if(x[14]>'6') cek=1;
                    else if(x[15]>'0') cek=1;
                    else if(x[16]>'0') cek=1;
                    else if(x[17]>'0') cek=1;
                    else if(x[18]>'0') cek=1;
                    else if(x[19]>'0') cek=1;
                    
                    if (cek==0)
                    printf("true\n");
                    else printf("false\n");
               }else{
                     printf("true\n");
                     }
    
    }
return 0;
}
