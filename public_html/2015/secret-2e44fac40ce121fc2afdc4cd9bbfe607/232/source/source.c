#include <stdio.h>

int main(){
		char x;
		int exit=0;
		scanf("%c",&x);
		x=tolower(x);
		switch(x){
			case 'a':exit=1;break;
			case 'i':exit=1;break;
			case 'u':exit=1;break;
			case 'e':exit=1;break;
			case 'o':exit=1;break;
		}
		if(exit==1){
			printf("true\n");
		}else{
			printf("false\n");
		}
	return 0;
}
