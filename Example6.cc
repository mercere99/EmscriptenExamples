// What if we want to call a C++ function from JS?
//
// To Compile:  emcc -s EXPORTED_FUNCTIONS="['_SquareInt']" Example6.cc -o Example6.js

#include <emscripten.h>
#include <iostream>

extern "C" {
  int SquareInt(int val) {
    return val * val;
  }
}
  
