/*Program			: MohamadPrastaPradipta_Reverse.c
  Deskripsi			: Revese
  Nama/NIM			: Mohamad Prasta Pradipta/151524018
  Compiler			: Dev-C++ 5.7.1 
  
================================================================*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char kal[50];
    
    printf ("ketikkan beberapa kata: ");

    gets(kal);
    
    strrev(kal);
    
    printf ("hasil setelah dibalik: ");
    printf ("%s\n",kal);
    

    return 0;
}

