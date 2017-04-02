#include<stdio.h>
#include<string.h>


int main(){
	char nadaDasarAwal[3],nadaYgDiCari[3];
	char nadaPatokan[12][3],tanggaNadaYgdiCari[12][3];
	char doremiPatokan[12][3];
	
	int indeksnada,counterprint,countermove,counterindeks,posisinada,parstopmove,donemove;
	
	strcpy(nadaPatokan[0],"C");
	strcpy(nadaPatokan[1],"C#");
	strcpy(nadaPatokan[2],"D");
	strcpy(nadaPatokan[3],"D#");
	strcpy(nadaPatokan[4],"E");
	strcpy(nadaPatokan[5],"F");
	strcpy(nadaPatokan[6],"F#");
	strcpy(nadaPatokan[7],"G");
	strcpy(nadaPatokan[8],"G#");
	strcpy(nadaPatokan[9],"A");
	strcpy(nadaPatokan[10],"A#");
	strcpy(nadaPatokan[11],"B");

	strcpy(doremiPatokan[0],"1");
	strcpy(doremiPatokan[1],"1#");
	strcpy(doremiPatokan[2],"2");
	strcpy(doremiPatokan[3],"2#");
	strcpy(doremiPatokan[4],"3");
	strcpy(doremiPatokan[5],"4");
	strcpy(doremiPatokan[6],"4#");
	strcpy(doremiPatokan[7],"5");
	strcpy(doremiPatokan[8],"5#");
	strcpy(doremiPatokan[9],"6");
	strcpy(doremiPatokan[10],"6#");
	strcpy(doremiPatokan[11],"7");
	
	scanf("%s",nadaYgDiCari);
	scanf("%s",nadaDasarAwal);
	
	//cari indeks nada dasar dari patokan
	counterindeks=0;

	while(strcmp(nadaDasarAwal,nadaPatokan[counterindeks])!=0){
		counterindeks++;		
	}
	
	//buat tangga nada baru
	donemove=0;
	parstopmove=counterindeks;
	countermove=0;
	while(donemove<=11){
		strcpy(tanggaNadaYgdiCari[countermove],nadaPatokan[counterindeks]);	
		countermove++;
		
		donemove++;	
		if(counterindeks+1<=11){
			counterindeks++;
		}else{
			counterindeks=0;
		}		
	}
	
	//cari indeks nada yang akan di konevrsi di tangga nada baru	
	posisinada=0;
	while(strcmp(nadaYgDiCari,tanggaNadaYgdiCari[posisinada])!=0){
		posisinada++;		
	}
	
	//print tangga nada
	counterprint=0;
	while(counterprint<=11){
		printf("%s",tanggaNadaYgdiCari[counterprint]);
		if(counterprint<11){
			printf(" ");
		}
		if(counterprint!=4){
			counterprint=counterprint+2;
		}else{
			counterprint=counterprint+1;
		}
	}
	//print doreminya
	printf("\n%s\n",doremiPatokan[posisinada]);
	
	
	return 0;
}


