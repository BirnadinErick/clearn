#include "../src/search.h"
#include "../unity/src/unity.h"

void setUp(void) {}

void tearDown(void) {}

void test_linear_search_should_find_9(void) {
  int needle = 9;
  int haystack[] = {2, 0, 0, 3, 0, 5, 1, 9, 2};

  size_t idx = linear_search(haystack, needle, 9);
  TEST_ASSERT_EQUAL_INT(7, (int)idx);
}

void test_linear_search_should_not_find(void) {
  int needle = 8;
  int haystack[] = {2, 0, 0, 3, 0, 5, 1, 9, 2};

  size_t idx = linear_search(haystack, needle, 9);
  TEST_ASSERT_EQUAL_INT(-1, (int)idx);
}

void test_linear_search_should_find_2(void) {
  int needle = 2;
  int haystack[] = {2, 0, 0, 3, 0, 5, 1, 9, 2};

  size_t idx = linear_search(haystack, needle, 10);
  TEST_ASSERT_EQUAL_INT(0, (int)idx);
}

void test_binary_search_should_find2(void) {
  int needle = 3;
  int haystack[] = {0, 0, 0, 3, 4, 5, 7, 9, 12};

  size_t idx = binary_search(haystack, 0, 8, needle);
  TEST_ASSERT_EQUAL_INT(3, (int)idx);
}

void test_binary_search_should_find9(void) {
  int needle = 9;
  int haystack[] = {0, 0, 0, 3, 4, 5, 7, 9, 12};

  size_t idx = binary_search(haystack, 0, 8, needle);
  TEST_ASSERT_EQUAL_INT(7, (int)idx);
}

void test_binary_search_should_not_find(void) {
  int needle = 8;
  int haystack[] = {0, 0, 0, 3, 4, 5, 7, 9, 12};

  size_t idx = binary_search(haystack, 0, 8, needle);
  TEST_ASSERT_EQUAL_INT(-1, (int)idx);
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_linear_search_should_find_2);
  RUN_TEST(test_linear_search_should_find_9);
  RUN_TEST(test_linear_search_should_not_find);
  RUN_TEST(test_binary_search_should_find2);
  RUN_TEST(test_binary_search_should_find9);
  RUN_TEST(test_binary_search_should_not_find);
  return UNITY_END();
}
