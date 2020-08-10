#include <stdio.h>
#include "turing.c"

void main() {

  // write on 0, move on 0, next state on 0, ... for 1
  int state_a[6] = { 1, 1, 1, 1, 0, 1 };
  int state_b[6] = { 1, 0, 0, 1, 1, -1 };

  int *algorithm[2];
  algorithm[0] = state_a;
  algorithm[1] = state_b;

  turing(30, algorithm);
}