#include "example.h"
#include <assert.h>

int factorial(int n) {
  if (n < 0) {
    return 0;
  }

  if (n < 2) {
    return 1;
  }

  int f = 1;
  for (int j = 2; j <= n; j++) {
    f *= j;
  }
  return f;
}

void fibonacci(int buffer[], size_t n) {
  assert(n >= 3);

  buffer[0] = 0;
  buffer[1] = 1;
  buffer[2] = 1;

  for (int i = 3; i < n; i++) {
    buffer[i] = buffer[i - 1] + buffer[i - 2];
  }
}

int add(int a, int b) { return a + b; }
