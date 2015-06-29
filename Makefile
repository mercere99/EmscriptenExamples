all: Example1.html Example2.html Example3.html Example4.html Example5.html Example6.js

Example5.html: Example5.cc
	emcc -s EXPORTED_FUNCTIONS="['_SquareInt', '_main']" Example5.cc -o Example5.html

Example6.js: Example6.cc
	emcc -s EXPORTED_FUNCTIONS="['_SquareInt']" Example6.cc -o Example6.js

Example%.html: Example%.cc
	emcc  $< -o $@

clean:
	-rm Example1.html Example2.html Example3.html Example4.html Example5.html
	-rm Example1.js Example2.js Example3.js Example4.js Example5.js Example6.js
