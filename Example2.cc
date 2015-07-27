// Compile with:   emcc Example2.cc -o Example2.html

#include <emscripten.h>

int main()
{
  EM_ASM({ alert('Hello World!'); });
}

