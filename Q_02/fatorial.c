#include "fatorial.h"

int fatorial (int num) {
	int i, r = 1;
	for (i = 2; i <= num; i++) {
		r *= i;
	}
	return r;
}