#include <stdio.h>
#include <string.h>

int main(){
	int i,result;
	typedef struct Word{
	char word[15];
	}words;
	words A[7];


strcpy(A[0].word, "Rabu");
strcpy(A[1].word, "Kamis");
strcpy(A[2].word, "Jumat");
strcpy(A[3].word, "Sabtu");
strcpy(A[4].word, "Minggu");
strcpy(A[5].word, "Senin");
strcpy(A[6].word, "Selasa");

scanf("%d", &i);
result = i%7;
printf("%s\n", A[result].word);
return 0;
}
