#include "search.h"

size_t linear_search(int haystack[], int needle, size_t size_haystack) {
  for (int i = 0; i < size_haystack; i++) {
    if (haystack[i] == needle) {
      return (size_t)i;
    }
  }
  return -1;
}

size_t binary_search(int haystack[], size_t low, size_t high, int needle) {

  if (low > high) {
    return -1;
  }

  size_t mid = low + (high - low) / 2;

  if (haystack[mid] == needle) {
    return mid;
  } else if (haystack[mid] > needle) {
    return binary_search(haystack, low, mid - 1, needle);
  } else {
    return binary_search(haystack, mid + 1, high, needle);
  }
}
