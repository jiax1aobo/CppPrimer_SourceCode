#include "Sales_item.h"
#include <iostream>

int main() {
  Sales_item si;
  while (std::cin >> si) {
    std::cout << si << std::endl;
  }
  return 0;
}