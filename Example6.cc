// What if we want to call a C++ function from JS?
//
// To Compile:  emcc -s EXPORTED_FUNCTIONS="['_SquareVal']" Example6.cc -o Example6.js

extern "C" {
  double SquareVal(double val) {
    return val * val;
  }
}
  
