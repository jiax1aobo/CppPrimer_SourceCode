#include "Sales_item.h"
#include <iostream>

int main() {
  Sales_item si1, si2;
  std::cin >> si1 >> si2;
  if (si1.isbn() == si2.isbn())
    std::cout << "The sum of two Sales_item: " << si1 + si2 << std::endl;
  else
    std::cout << "Non-Equal Sales_item" << std::endl;
  return 0;
}