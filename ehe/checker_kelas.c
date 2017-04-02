#include <stdio.h>
#include <stdbool.h>

int main(int argc, char **argv) {
	FILE *input;
	FILE *output;
	bool correct = false;

	input = fopen(argv[1], "r");
	output = fopen(argv[2], "r");

	int T, M, N;
	fscanf(input, "%d %d %d", &T, &M, &N);

	int a, b, sel;
	int count = 0;
	int res = fscanf(output, "%d - %d", &a, &b);
	if (res != EOF) {
		if (!(a <= N && N <= b)) {
			fclose(input);
			fclose(output);
			printf("[NOT OK]\n");
			return 0;
		}

		int sel = b - a;
		count = 1;
		while (count < T && fscanf(output, "%d - %d", &a, &b) != EOF) {
			if (sel != (b - a)) {
				fclose(input);
				fclose(output);
				printf("[NOT OK]\n");
				return 0;
			}
			count++;
			sel = b - a;
			if (count == T && !(a <= M && M <= b)) {
				fclose(input);
				fclose(output);
				printf("[NOT OK]\n");
				return 0;
			}
		}
	} else {
		fclose(input);
		fclose(output);
		printf("[NOT OK]\n");
		return 0;
	}

	if (count != T) {
		fclose(input);
		fclose(output);
		printf("[NOT OK]\n");
		return 0;
	}

	fclose(input);
	fclose(output);
	printf("[OK]\n");
	return 0;
}