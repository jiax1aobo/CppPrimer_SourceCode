int main() {
  int v1 = 1, v2 = 2;
  int *p = &v1;
  p = &v2; // 修改指针的值
  *p = 3;  // 修改指针所指对象的值
  return 0;
}