#include <iostream>
int main() {
  int end = 100;
  int num = 50, sum = 0;
  while (num <= end) {
    sum += num;
    ++num;
  }
  std::cout << "The sum of 50..100 is: " << sum << std::endl;
  return 0;
}