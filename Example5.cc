// What if we want to call a C++ function from JS?
//
// To Compile:  emcc -s EXPORTED_FUNCTIONS="['_SquareInt', '_main']" Example5.cc -o Example5.html

#include <emscripten.h>
#include <iostream>

extern "C" {
  int SquareInt(int val) {
    return val * val;
  }
}
  
int main()
{
  std::cout << "Hello!" << std::endl;

  int val1 = 21;
  int val2 = EM_ASM_INT({
      SquareInt = Module.cwrap('SquareInt', 'number', ['number']);
      return SquareInt($0) + 2;
    }, val1);

  std::cout << "val2 == " << val2 << std::endl;
}

