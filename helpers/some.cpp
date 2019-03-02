#include <iostream>
#include <vector>
#include <array>
#include <string>

/**
 * returns true if the function passed returns true for 
 * any element of the array as argument
 * Works for std::vector and std::array
 * @param (array, function)
 * @return boolean
 * */

template <typename T, typename lambda>
bool some(const T &array, const lambda &func)
{
  for (auto &element : array)
  {
    if (func(element))
    {
      return true;
    }
  }

  return false;
}

int main()
{
  std::vector<int> vector = {1, 2, 3, 4, 5};
  std::cout << some(vector, [](auto element) {
    return element == 4;
  }) << std::endl;

  std::array<std::string, 5> array = {"How", "are", "you", "doing"};
  std::cout << some(array, [](auto element) {
    return element == "Hello";
  }) << std::endl;
}