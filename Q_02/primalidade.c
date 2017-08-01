#include "primalidade.h"

char is_prime (unsigned int n) {
	int i;
	if (n != 2 && n % 2 == 0){
		return 0;
	}
	if (n < 2) {
		return 0;
	}
	for (i = 3; i < (int)(sqrt(n)); i+= 2) {
		if (n % i == 0){
			return 0;
		}
	}
	return 1;
}