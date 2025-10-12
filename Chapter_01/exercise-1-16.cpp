#include <iostream>
int main() {
  int val, sum = 0;
  std::cout << "Input some numbers:" << std::endl;
  while (std::cin >> val) {
    sum += val;
  }
  std::cout << "The sum of those numbers is: " << sum << std::endl;
  return 0;
}