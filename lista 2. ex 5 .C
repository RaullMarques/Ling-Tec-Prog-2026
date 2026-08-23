#include <stdio.h>
#include <stdlib.h>
	
	int main(int argc, char *argv[]) {

	double g, r;
	double p = 3.141592;
	
	scanf("%lf", &g);
	
	r = g * p / 180.0;
	
	printf("%6lf\n", r);
			
	return 0;
}
