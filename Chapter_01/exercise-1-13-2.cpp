#include <iostream>
int main() {
  std::cout << "The number between 10 and 1: " << std::endl;
  for (int i = 10; i >= 0; --i) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  return 0;
}