#include "../src/sort.h"
#include "../unity/src/unity.h"

void setUp(void) {}

void tearDown(void) {}

void test_bubble_sort_should_sort_2_elements(void) {
  int expected[2] = {0, 1};
  int actual[2] = {1, 0};

  bubble_sort(actual, 2);
  TEST_ASSERT_EQUAL_INT_ARRAY(expected, actual, 2);
}

void test_bubble_sort_should_sort_ascending(void) {
  int expected[4] = {0, 1, 2, 3};
  int actual[4] = {0, 2, 3, 1};

  bubble_sort(actual, 4);
  TEST_ASSERT_EQUAL_INT_ARRAY(expected, actual, 4);
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_bubble_sort_should_sort_ascending);
  RUN_TEST(test_bubble_sort_should_sort_2_elements);
  return UNITY_END();
}
