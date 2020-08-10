#include <stdio.h>

void print_tape(int tape[], int tapesize) {
  for (int i = 0; i < tapesize; i += 1) 
    printf("%d", tape[i]);
    printf("\n");
}

void run (int tape[], int pos, int state, int **algorithm) {
  int write = 0;
  int move = 1; 
  int next = 2;
  
  if (tape[pos] == 1) {
    write += 3;
    move += 3;
    next += 3;
  }

  // update the tape where we are
  tape[pos] = algorithm[state][write];

  // determine move left or right next
  int newpos;
  if (algorithm[state][move] == 1)
    newpos = pos + 1;
  if (algorithm[state][move] == 0)
    newpos = pos - 1;

  // halt if next state is -1
  if (algorithm[state][next] == -1)
    return;

  run(tape, newpos, algorithm[state][next], algorithm);
}

void turing (int tapesize, int **algorithm) {
  int tape[tapesize];

  for (int i = 0; i < tapesize; i += 1) {
    tape[i] = 0;
  }

  run(tape, tapesize / 2, 0, algorithm);
  print_tape(tape, tapesize);
}