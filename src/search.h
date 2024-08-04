#include <stddef.h>

/*
 * finds `needle` in `haystack`. This function searches an
 * integer from array of integer. return's index of first
 * occurance.
 *
 * during multiple occurances returns only the first.
 */
size_t linear_search(int haystack[], int needle, size_t size_haystack);

/*
* performs binary search on a *sorted array (ascending)* of integers.
* return index of first occurance of the `needle`
*/
size_t binary_search(int haystack[], size_t low, size_t high, int needle); 
