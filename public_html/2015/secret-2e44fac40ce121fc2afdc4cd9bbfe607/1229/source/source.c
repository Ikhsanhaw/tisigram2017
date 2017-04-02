#include <stdio.h>
#include <string.h>

int main(){
	char input[2];
	float nilai = 0;
	
	for(int i=0; i<3; i++){
		gets(input);
	
		if(strcmp(input, "S") == 0) {
			nilai = nilai + 15;
		}else if(strcmp(input, "S-") == 0){
			nilai+=14;
		}else if(strcmp(input, "A+") == 0){
			nilai+=13;
		}else if(strcmp(input, "A") == 0){
			nilai+=12;
		}else if(strcmp(input, "A-") == 0){
			nilai+=11;
		}else if(strcmp(input, "B+") == 0){
			nilai+=10;
		}else if(strcmp(input, "B") == 0){
			nilai+=9;
		}else if(strcmp(input, "B-") == 0){
			nilai+=8;
		}else if(strcmp(input, "C+") == 0){
			nilai+=7;
		}else if(strcmp(input, "C") == 0){
			nilai+=6;
		}else if(strcmp(input, "C-") == 0){
			nilai+=5;
		}else if(strcmp(input, "D+") == 0){
			nilai+=4;
		}else if(strcmp(input, "D") == 0){
			nilai+=3;
		}else if(strcmp(input, "D-") == 0){
			nilai+=2;
		}else if(strcmp(input, "E+") == 0){
			nilai+=1;
		}else{
			nilai+=0;
		}	
	}
	nilai = nilai/3;
	if(nilai == 15){
		printf("S");
	}else if(nilai >=14){
		printf("S-");
	}else if(nilai >=13){
		printf("A+");
	}else if(nilai >=12){
		printf("A");
	}else if(nilai >=11){
		printf("A-");
	}else if(nilai >=10){
		printf("B+");
	}else if(nilai >=9){
		printf("B");
	}else if(nilai >=8){
		printf("B-");
	}else if(nilai >=7){
		printf("C+");
	}else if(nilai >=6){
		printf("C");
	}else if(nilai >=5){
		printf("C-");
	}else if(nilai >=4){
		printf("D+");
	}else if(nilai >=3){
		printf("D");
	}else if(nilai >=2){
		printf("D-");
	}else if(nilai >=1){
		printf("E+");
	}else{
		printf("E");
	}
	
	printf("\n");
	return 0;
}
