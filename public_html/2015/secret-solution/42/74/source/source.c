#include <stdio.h>
#include <string.h>
#define MAX 1005
typedef char string[MAX];

int main(){
	string dict[] = {"de","e","ga","ka","mo","ne","ni","no","to","wa","wo","yo"};
	string kalimat;
	gets(kalimat);
	
	int countWord = 0;
	string split[MAX];

	for (char *p = strtok(kalimat," ,.-");p;p = strtok (NULL," ,.-")){
		strcpy(split[countWord],p);
		countWord++;
	}

	for(int i = 0 ; i < countWord ; i++){
		for (int j = 0 ; j < 12 ;j++){
			if (strcmp(split[i],dict[j])!=0){
				if (strstr(split[i],dict[j]))
					printf("\"%s\" pada \"%s\" bukan partikel\n",dict[j],split[i]);
			}			
		}
	}

	return 0;
}


