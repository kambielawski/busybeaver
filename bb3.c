#include <stdio.h>

#include "turing.c"

int main() {
  // write on 0, move on 0, next state on 0, ... for 1
  int state_a[6] = {1, 1, 1, 1, 1, -1};
  int state_b[6] = {0, 1, 2, 1, 1, 1};
  int state_c[6] = {1, 0, 2, 1, 0, 0};

  int *algorithm[3];
  algorithm[0] = state_a;
  algorithm[1] = state_b;
  algorithm[2] = state_c;

  turing(50, algorithm);
}