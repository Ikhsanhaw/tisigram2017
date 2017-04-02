#include <stdio.h>
#include <string.h>


int main(){
	
	/* DEKLARASI */
	char teks[2000];
	char cari[2000];
	int i,j,count=0;
	short not_find;
	
	/* PROSES */
	gets(teks);
	gets(cari);
	
	for(i=0; i<strlen(teks); i++){
		if(teks[i]==cari[0]){			
			not_find=0;
			j=1;			
			while((j<strlen(cari)) && (not_find==0)){				
				if(teks[i+j]!=cari[j]){
					not_find=1;															
				}
				j++;
			}
				if(not_find==0){					
					count++;
			}
		}
	}
	
	printf("%d\n", count);
	
	return 0;
}
