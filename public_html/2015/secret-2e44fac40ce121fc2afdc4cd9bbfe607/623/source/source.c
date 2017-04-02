
#include<conio.h>
#include<stdio.h>

main(){
 int a[100],jml;

   scanf("%d", &jml);

   for (int i=0;i<jml;i++){
    scanf("%d", &a[i]);
   }

   int x;
   for (int i=0;i<jml-1;i++)
    for (int j=i+1;j<jml;j++){
      if (a[i]>a[j]){
           x=a[i];
         }
    }

    printf("%d", x);
   

  return 0;
}
