#include "sort.h"
#include <stdio.h>

void print_arr(int arr[], size_t size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void bubble_sort(int arr[], size_t size) {
  print_arr(arr, size);
  for (int i = 0; i < size; i++) {
    for (int j = 0; j - size - i; j++) {
      if (arr[j] > arr[j + 1]) {
        int t = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = t;
      }
    }
  }
  print_arr(arr, size);
}
