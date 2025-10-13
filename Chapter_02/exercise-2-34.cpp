#include <iostream>
#include <ostream>

int main() {
  int i = 0, &r = i; // i 整数；r 引用 i
  auto a = r;        // a 整数
  const int ci = i, &cr = ci;
  auto b = ci;       // b 整数（忽略顶层 const）
  auto c = cr;       // c 整数（忽略顶层 const）
  auto d = &i;       // d 整型指针
  auto e = &ci;      // 指向整型常量的指针
  const auto f = ci; // auto f 整型（忽略顶层 const）-> const int
  auto &g = ci;      // g 整型常量引用（auto 引用保留顶层 const）
  //   auto &h = 42; 非常量引用不能用常量初始化
  const auto &j = 42; // 常量引用可以用常量初始化
  auto k = ci, &l = i;
  auto &m = ci, *p = &ci;
  //   auto &n = i, *p2 = &ci;

  std::cout << "a before: " << a; // 0
  a = 42;
  std::cout << ", after: " << a << std::endl; // 42

  std::cout << "b before: " << b; // 0
  b = 42;
  std::cout << ", after: " << b << std::endl; // 42

  std::cout << "c before: " << c; // 0
  c = 42;
  std::cout << ", after: " << c << std::endl; // 42

  std::cout << "d before: " << d; // &i
  //   d = 42; // error: from 'int' to 'int *'
  std::cout << ", after: " << d << std::endl;
  std::cout << "e before: " << e;
  //   e = 42; // error: from 'int' to 'const int *'
  std::cout << ", after: " << e << std::endl;
  std::cout << "g before: " << g;
  //   g = 42;// error: assign literal to non-const ref.
  std::cout << ", after: " << g << std::endl;
  return 0;
}