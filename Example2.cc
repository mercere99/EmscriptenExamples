// Compile with:   emcc Example2.cc -o Example2.html

#include <emscripten.h>
#include <iostream>

int main()
{
  std::cout << "Hello!" << std::endl;

  EM_ASM({ alert("Hello!"); });
}

