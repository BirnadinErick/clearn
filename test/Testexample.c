#include "../src/example.h"
#include "../unity/src/unity.h"

void setUp(void) {}

void tearDown(void) {}

void test_add(void) {
  int expected = 2;

  int actual = add(1, 1);
  TEST_ASSERT_EQUAL_INT(expected, actual);
}

void test_fibonacci_should_first5(void) {
  int expected[] = {0, 1, 1, 2, 3};
  int actual[5] = {0};
  size_t n = 5;

  fibonacci(actual, n);
  TEST_ASSERT_EQUAL_INT_ARRAY(expected, actual, n);
}

void test_fibonacci_should_first3(void) {
  int expected[] = {0, 1, 1};
  int actual[3] = {0};
  size_t n = 3;

  fibonacci(actual, n);
  TEST_ASSERT_EQUAL_INT_ARRAY(expected, actual, n);
}

void test_factorial_n_lessthan2_should_1(void) {
  int actual = factorial(1);
  TEST_ASSERT_EQUAL_INT(1, actual);
}

void test_factorial_n_negative_should_0(void) {
  int actual = factorial(-1);
  TEST_ASSERT_EQUAL_INT(0, actual);
}

void test_factorial_n_6_should_720(void) {
  int actual = factorial(6);
  TEST_ASSERT_EQUAL_INT(720, actual);
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_add);
  RUN_TEST(test_fibonacci_should_first3);
  RUN_TEST(test_fibonacci_should_first5);
  RUN_TEST(test_factorial_n_lessthan2_should_1);
  RUN_TEST(test_factorial_n_negative_should_0);
  RUN_TEST(test_factorial_n_6_should_720);
  return UNITY_END();
}
