#include <stddef.h>

/* calculate first n fibonacci numbers.
 * modifies the buffer argument.
 * only works with n >= 3
 */
void fibonacci(int buffer[], size_t n);

// adds 2 integers
int add(int a, int b);

// returns value of n-th facorial.
// assumption that n-th factorial won;t overflow int size.
int factorial(int n);

