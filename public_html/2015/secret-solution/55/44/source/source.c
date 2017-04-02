#include <stdio.h>

int main(){

    int BebekAwal,BebekLahir,BebekMati,JumlahSetelahKelahiran,JumlahSetelahKematian;

    scanf("%d",&BebekAwal);
    scanf("%d",&BebekLahir);
    scanf("%d",&BebekMati);

    JumlahSetelahKelahiran = BebekAwal+BebekLahir;
    JumlahSetelahKematian = BebekAwal-BebekMati;

    if(JumlahSetelahKematian>=0)
    {
        if(BebekAwal==0 && BebekLahir!=0)
             {
                 printf("%d\n",BebekAwal);
                 printf("Mustahil!\n");
                 printf("%d\n",JumlahSetelahKematian);
             }
             else
             {
                //jika sisa jumlah kematian lebih dari sama dengan 0
                printf("%d\n",BebekAwal);
                printf("%d\n",JumlahSetelahKelahiran);
                printf("%d\n",JumlahSetelahKematian);
             }
    }
    else
    {
             if(BebekAwal==0 && BebekLahir!=0)
             {
                 printf("%d\n",BebekAwal);
                 printf("Mustahil!\n");
                 printf("Mustahil!\n");
             }
             else
             {
                //jika jumlah kematian kurang dari 0
                printf("%d\n",BebekAwal);
                printf("%d\n",JumlahSetelahKelahiran);
                printf("Mustahil!\n");
             }
    }


    return 0;
}
