#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef char string[1000];
typedef struct {
	string nama;
	int penalty;
	int solved;
}Scoreboard;

void swap(Scoreboard *S1, Scoreboard *S2){
	Scoreboard temp;
	temp = *S1;
	*S1 = *S2;
	*S2 = temp;
}

bool sortCriteria(Scoreboard S1,Scoreboard S2) {
	if (S1.solved >= S2.solved){
		if ( S1.solved > S2.solved ) return true;
		else if ( S1.penalty <= S2.penalty ) {
			if (S1.penalty < S2.penalty ) return true;
			if ( strcmp(S1.nama,S2.nama) < 0) return true;
		}
	}
	return false;
}

int main(){
	int i,j,N,countPeserta = 0;
	scanf("%d",&N);
	Scoreboard S[N+5];

	//Sort using Insertion Sort Algorithm..
	for ( i = 0 ; i < N ; i++){
		scanf("%s %d %d",S[i].nama,&S[i].solved,&S[i].penalty);
		for (j = 0 ; j < countPeserta ; j++){
			if (sortCriteria(S[i],S[j]))
				swap(&S[i],&S[j]);	
		}
		countPeserta++;
		if ( countPeserta > 5) countPeserta = 5;
	}

	for ( i = 0 ; i < countPeserta ; i++ )
		printf("%s %d %d\n",S[i].nama,S[i].solved,S[i].penalty);

	return 0;
}

