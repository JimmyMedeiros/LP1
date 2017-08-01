#include "fatorial.h"

int fatorial (unsigned int num) {
	int i = 2, r = 1;
	while (i <= num) {
		r *= i;
	}
	return r;
}