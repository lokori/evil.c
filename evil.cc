#include "evil.hh"

// .hh oh wait, is this C++ or C? Confuse programmers for true evil
#include <stdio.h>

int main(int j) {
  int i;
  bool b;
   
  // , operator leads to clever loop constructs. 
  for (i=0, b=TRUE; i<200000; i++) {
    if (b != TRUE)
      printf("we failed at step %i\n", i);
    i += 1;     
  }
}
