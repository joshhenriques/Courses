#include <stdio.h>

int main() {
	
	printf("We are going to evaluate the expression \"(x*3)/2\"\n");
    printf("Input x value: ");
    scanf("%d", &x);
    printf("You entered the value: %d \n", x);
	printf("%d\n", x*3/2);
	printf("%f\n", x*3/2.0);

    return 0;
}