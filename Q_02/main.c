#include "fatorial.h"
#include <stdio.h>


int main(int argc, char const *argv[])
{
	int n;

	scanf("%d", n);
	n = fatorial(n);

	while (!is_prime(n) && n > 1){
		n--;
	}
	printf("%d\n", n);

	return 0;
}