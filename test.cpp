#define CATCH_CONFIG_MAIN

#include "catch.h"
#include "numberSum.h"


TEST_CASE("sum_all_numbers() function summarises integers in vector with 2 x 3 elements") {
  std::vector<std::vector<int> > numbers = {{1, 2, 8}, {3, 4, 5}};
  REQUIRE(sum_all_numbers(numbers) == 23);
}

TEST_CASE("sum_all_numbers() function summarises integers in vector with 1 x 3 elements") {
  std::vector<std::vector<int> > numbers = {{1, 2, 8}};
  REQUIRE(sum_all_numbers(numbers) == 11);
}

TEST_CASE("accumulate_all_numbers() function summarises integers in vector with 2 x 3 elements") {
  std::vector<std::vector<int> > numbers = {{1, 2, 8}, {3, 4, 5}};
  REQUIRE(accumulate_all_numbers(numbers) == 23);
}

TEST_CASE("accumulate_all_numbers() function summarises integers in vector with 1 x 3 elements") {
  std::vector<std::vector<int> > numbers = {{3, 4, 5}};
  REQUIRE(accumulate_all_numbers(numbers) == 12);
}
