// this project displays a Pascal triangle up to N rows
#include <stdio.h>
#include "pasMath.h"

int main(void) {
	int n, k;
	for (n = 0; n < MAX_LINE; n++) {
		for (k = 0; k <= n; k++) {
			printf("%4d", binom(n, k));
		}
		printf("\n");
	}
	return 0;
}

