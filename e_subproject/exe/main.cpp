#include "static_lib_1.hpp"
#include "header_only_lib_2.hpp"
#include "dynamic_lib_3.hpp"
#include <iostream>

int main() {
  int a = 3, b = 4;
  std::cout << "Test static lib  : " << a << " + " << b << ": " << STATIC::add(a, b) << '\n';
  std::cout << "Test header only : " << a << " - " << b << ": " << HEADER_ONLY::sub(a, b) << '\n';
  std::cout << "Test dynamic lib : " << a << " * " << b << ": " << DYNAMIC::mul(a, b) << '\n';
  return 0;
}