#include <stdio.h>

int main() {
	int x = 3;
	
	printf("We are going to evaluate the expression \"(x*3)/2\"\n");
	printf("The value of \"x\" is set to %d\n", x);
	printf("%d\n", x*3/2);
	printf("%f\n", x*3/2.0);

	return 0;
}
