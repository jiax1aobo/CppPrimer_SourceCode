int main() {
  const int i = 42;
  auto j = i;                 // int j
  const auto &k = i;          // 绑定到整型常量的常量引用
  auto *p = &i;               // 指向整型常量的指针
  const auto j2 = i, &k2 = i; // const int j2; k2 同 k
  return 0;
}