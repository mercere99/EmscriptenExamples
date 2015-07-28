// Compile with:   emcc Example4.cc -o Example4.html

#include <emscripten.h>
#include <string>

// Function to trigger alerts straight from C++
void Alert(const std::string & msg) {
  EM_ASM_ARGS({
      var msg = Pointer_stringify($0); // Convert message to JS string
      alert(msg);                      // Use JS version of alert
    }, msg.c_str());
}

int main()
{
  Alert("Hello from C++!");
}

