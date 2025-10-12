#include <iostream>

int main() {
  std::cout << "Input two numbers:" << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  // 下面的代码错误，因为 << 运算符是二目运算符
  // std::cout << "The product of " << v1;
  //           << " and " << v2;
  //           << " is: " << v1 * v2 << std::endl;
  // 下面的代码正确
  std::cout << "The product of " << v1
            << " and " << v2
            << " is: " << v1 * v2 << std::endl;
  return 0;
}