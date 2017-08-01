#include "fatorial.h"
#include "primalidade.h"
#include <stdio.h>


int main(int argc, char const *argv[])
{
	int n;

	scanf("%d", &n);
	n = fatorial(n);
	printf("Fatorial: %d\n", n);

	while (!is_prime(n) && n > 1){
		n--;
	}
	printf("Maior primo menor que o fatorial: %d\n", n);

	return 0;
}