#include <iostream>
#include "fibonacci.h"
#include <string>
#include <boost/multiprecision/cpp_int.hpp>

using Int = boost::multiprecision::cpp_int;

int main(int argc, char* argv[]) {

  // program function:
  // takes in 1 argument- time (in seconds) that computation runs for
  // time must be a positive integer

  if(argc != 2) {
    std::cerr << "Usage: main [time]" << std::endl;
    std::cout << "Example: main 5" << std::endl;
  }
  
  int time = std::stoi(argv[1]);

  if(time < 0) {
    std::cerr << "Error: time must be greater than 0" << std::endl;
  }

  int i = 0;
  Int a = 0;
  Int b = 1;
  Int c;

  while(i < time) {
    c = a + b;
    std::cout << "iteration: " << i + 1 << ", fibonacci number: " << c << std::endl;
    a = b;
    b = c;
    i++;
  }
  
  return (0);
}
