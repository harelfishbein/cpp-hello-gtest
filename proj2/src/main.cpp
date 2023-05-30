#include <iostream>

#include "gcd.hpp"

using namespace proj2;

using
  std::cout,
  std::endl,
  std::size_t,
  std::stoi,
  std::stol;


int main(int argc, char* argv[]) {
  if (argc < 3) return 1;
  
  size_t pos{};
  const long arg1 {stol(argv[1], &pos)};
  const long arg2 {stol(argv[2], &pos)};
  
  cout << gcd(arg1, arg2) << endl;
  
  cout << gcd((int)arg1, (int)arg2) << endl;

  return 0;
}

