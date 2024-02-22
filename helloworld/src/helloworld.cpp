#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include "base.hpp"

int main() {

  std::cout << "hello world !" << std::endl;

  std::vector<std::string> msg {"hello", "c++", "java", "golang"};
  std::for_each(msg.begin(), msg.end(),
                [](const std::string &ss) { std::cout << ss << " "; });
  std::cout << get_string(2) << std::endl;

  return 0;
}
