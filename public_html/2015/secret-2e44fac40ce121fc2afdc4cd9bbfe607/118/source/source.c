#include <stdio.h>
#include <string.h>

int main(){
	char karakter[10];
	scanf("%s",&karakter);
	strrev(karakter);
	printf("%s\n",karakter);
	
	return 0;
}
char *strrev(char *str){
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2){
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}
