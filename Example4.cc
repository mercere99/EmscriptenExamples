// Compile with:   emcc Example3.cc -o Example3.html

#include <emscripten.h>
#include <iostream>

int main()
{
  std::cout << "Hello!" << std::endl;

  int val1 = 21;
  int val2 = EM_ASM_INT({
      var msg = Pointer_stringify($1);
      alert(msg);
      return $0 * 2;
    }, val1, "Computing!");

  std::cout << "val2 == " << val2 << std::endl;
}

