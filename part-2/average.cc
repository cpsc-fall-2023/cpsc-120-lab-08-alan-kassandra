// Alan Kit
// Alantk@csu.fullerton.edu
// @Alant-k
// Partners: @sanchez-k

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number. \n";
    return 1;
  }

  float total{0};
  bool first(true);
  for (std::string& argument : arguments) {
    if (first) {
      first = false;
    } else {
      float number{std::stof(argument)};
      total += number;
    }
  }

  float number_of_values{static_cast<float>(arguments.size() - 1)};
  float average{total / number_of_values};
  std::cout << "average = " << average << "\n";

  return 0;
}
