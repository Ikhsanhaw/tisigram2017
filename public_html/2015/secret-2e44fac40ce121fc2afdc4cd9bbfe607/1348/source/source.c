#include <stdio.h>

int main(){
	char input[2000];
	char cari[2000];
	int hasil = 0, huruf = 0, index = 0, i=0;
	int cek = 0;
	
	gets(input);
	gets(cari);
	
	while(cari[huruf] != '\0'){
		huruf++;
	}
	
	while(input[index] != '\0'){
		if(input[index] == cari[i]){
			cek = 1;
			while(i<huruf && cek == 1){
				if(input[index+i] == cari[i]){
					i++;
					cek = 1;
				}else{
					i = 0;
					cek = 0;
				}
			}
			if(cek){
				hasil++;
			}
			i = 0;
		}
		index++;
	}
	
	printf("%d\n", hasil);
}
