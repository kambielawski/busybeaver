#include <stdio.h>

#include "turing.c"

int main() {
  int state1[6] = {1, 1, 1, 1, 0, 1};
  int state2[6] = {1, 0, 0, 0, 0, 2};
  int state3[6] = {1, 1, -1, 1, 0, 3};
  int state4[6] = {1, 1, 3, 0, 1, 0};

  int *algorithm[4];
  algorithm[0] = state1;
  algorithm[1] = state2;
  algorithm[2] = state3;
  algorithm[3] = state4;

  turing(20, algorithm);
}