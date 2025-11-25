#include <stdio.h>
#include "indexes.h"

int main(int argc, char*argv[]) {
  // Start loop at 1 to skip program name
  for (int i = 0; i < argc; i++) {
    printf("Argument %d: %s\n", i, argv[i]);
  }
  return 0;
}
