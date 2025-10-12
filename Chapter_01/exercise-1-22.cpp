#include "Sales_item.h"
#include <iostream>

int main() {
  Sales_item si1, si2;
  while (std::cin >> si1) {
    si2 += si1;
  }
  std::cout << "The sum of all Sales_item: " << si2 << std::endl;
  return 0;
}