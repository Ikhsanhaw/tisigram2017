#include<stdio.h>
//#include<conio.h>

int main (){
  int angka,hasil;
  
  scanf("%d",&angka);
  while(angka>=0){
      hasil=(angka^(angka))mod 2;    
      printf("%d",hasil);     
  }   
 // getch();
}
