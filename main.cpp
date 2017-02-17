#include "numberSum.h"
 
//Exercise no. 1: Create a function that takes a matrix (list of lists) of numbers and sums all the numbers.

int main(int argc, const char * argv[]) {
  std::vector<std::vector<int> > matrix_of_numbers = {{1, 2, 8}, {3, 4, 5}};
  std::cout << "Sum of numbers: " << sum_all_numbers(matrix_of_numbers) << std::endl;
  std::cout << "Sum of numbers by iterating through them: " << accumulate_all_numbers(matrix_of_numbers) << std::endl;
  return 0;
}
