#include <stdio.h>

int myf() {
  return 0;
}

int myF(int);             /* function prototype */

int main() {
 int x = myf();           /* good call, myf() defined before */
 printf("Hello World\n"); /* good call, prototype for printf() is in stdio.h */
 x = myF(3);              /* good call, myF() prototype given above, even i
                             though the definition is below */
 x = myG(7);              /* a bad call, no protype, no definition */
 return 0;
}

int myF(int a) {
  return a+3;
}

int myG(int a) {
  return a*2;
}