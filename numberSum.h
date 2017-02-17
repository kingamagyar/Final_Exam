#ifndef numberSum_h
#define numberSum_h

#include <iostream>
#include <vector>

int sum_all_numbers(std::vector<std::vector<int> > numbers) {
  int sum_of_numbers = 0;
  for(unsigned int i = 0; i < numbers.size(); ++i) {
    for(unsigned int j = 0; j < numbers[i].size(); ++j) {
      sum_of_numbers += numbers[i][j];
    }
  }
  return sum_of_numbers;
}

int accumulate_all_numbers(std::vector<std::vector<int> > numbers) {
  std::vector<std::vector<int> >::iterator row;
  std::vector<int>::iterator col;
  int sum_of_numbers = 0;
  for (row = numbers.begin(); row != numbers.end(); ++row) {
    for (col = row->begin(); col != row->end(); col++) {
      sum_of_numbers += *col;
    }
  }
  return sum_of_numbers;
}

#endif /* numberSum_h */
