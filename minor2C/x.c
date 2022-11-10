#include <stdio.h>

#ifdef _A1
  extern void y();
  extern void z();
#endif


int main() {
#ifdef _A1
  printf("This is a version when _A1 is defined\n");
  y();
  z(y);
#else
  printf("This is a version when _A1 is not defined\n");
#endif

  return 0;
}