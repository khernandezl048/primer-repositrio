#include <iostream>

int main(int argc, char **argv)

{
  // tipos primitivos
  double x = -9.6e3; // 64 bits 
  long double y = -9.6e3; // > 64 bits,mayor precision que double
  float z = 10.54e-8; // 32 bits, menor precision que los double
  int a = 5678; // representa los numeros enteros, sin decimales
  long int b = -98765443; // guardar enteros muy grandes
  short int c = 678; // enteros mas pequeños
  bool flag = true;

  std::cout << sizeof(short int) << std::endl;
  std::cout << sizeof(int) << std::endl;
  std::cout << sizeof(long int) << std::endl;

  std::cout << sizeof(float) << std::endl;
  std::cout << sizeof(long double) << std::endl;
  
  return 0;
}  
