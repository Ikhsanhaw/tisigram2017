#include <stdio.h>

int main(){
	//KAMUS DATA
	int i, j, k = 0;
	char teks[11], temp;
	//ALGORITMA
	gets(teks);
	
	//menghitung panjang string
	while(teks[k]!='\0'){
		k++;
	}
	
	//proses reverse
	i=0;
	j=k-1;
	if(k%2!=0){
		while(i!=k/2 && j!=k/2){
			temp = teks[i];
			teks[i] = teks[j];
			teks[j] = temp;
			i++;
			j--; 
		}
	}else{
		while(i<k/2 && j>(k/2)-1){
			temp = teks[i];
			teks[i] = teks[j];
			teks[j] = temp;
			i++;
			j--;	
		}
	}
	printf("%s\n", teks);
	
	return 0;
}