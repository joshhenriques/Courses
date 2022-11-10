#include <stdio.h>

extern double square_root(int);

int main() {
    int x;
	
	printf("We are going to evaluate the expression the square root\"x\"\n");
    printf("Input x value: ");
    scanf("%d", &x);
    printf("You entered the value: %d \n", x);

    double y = square_root(x);
	printf("The square root of %d is %f\n", x, y);
    printf("Check: %f", y*y);

    return 0;
}