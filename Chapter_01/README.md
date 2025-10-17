# 第一章

- C++ 程序必须拥有 `main` 函数，它是程序的执行起点。
    - 函数签名为 `int main();` 或 `int main(int argc, char *argv[]);`
- 标准输入输出
    - `istream` 库的 `cin` 对象，从该对象读取程序输入
    - `ostream` 库的 `cout` 对象，向该对象写入输出
    - `ostream` 库的 `cerr` 对象，向该对象写入错误信息
    - `ostream` 库的 `clog` 对象，向该对象写入程序运行信息
- 当使用输入流作为判断条件时（例如 `while(std::cin >> val)`），本质上是检查 `istream` 对象，或者说检查输入流的状态
    - 当遇到文件结束（EOF）或遇到无效输入时，输入流对象的状态会变为无效，无效状态的输入流对象会使条件为假