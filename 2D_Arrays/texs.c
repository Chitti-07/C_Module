#include <stdio.h>

void red () {
  printf("\033[1;31m");
}

void purple() {
    printf("\033[0;36m%d\n", 90);
}

void reset () {
  printf("\033[0m");
}

int main () {
  red();
  printf("Hello ");
  purple();
  printf("world\n");
  reset();
  printf("Reset");
  return 0;
}