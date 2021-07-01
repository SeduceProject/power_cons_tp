#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
double pi(unsigned long itNb) {
	double x, y, val, error;
	unsigned long inCircle, i;
 
	for (inCircle = 0,i = 0; i < itNb; i ++) {
		x = rand() / (RAND_MAX + 1.0);
		y = rand() / (RAND_MAX + 1.0);
		if (x * x + y * y < 1) inCircle ++;
	}
	val = (double) inCircle / i;
	val *= 4;
	return val;
}
 
int main(int argc, char *argv[]) {
	char* end;
	unsigned long nbIteration = strtol(argv[1], &end, 10);
	printf("Valeur de Pi    : 3,141592653589793238462643383279\n");
	printf("Valeur calculee : %f apres %lu iterations\n", pi(nbIteration), nbIteration);
	return 0;
}
