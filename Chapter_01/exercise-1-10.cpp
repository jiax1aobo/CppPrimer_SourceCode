#include <iostream>
#include <ostream>
int main() {
  int num = 10;
  std::cout << "The number between 10 and 1: " << std::endl;
  while (num >= 1) {
    std::cout << num-- << " ";
  }
  std::cout << std::endl;
  return 0;
}