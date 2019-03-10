#include <iostream>
#include <vector>
#include <array>
#include <string>

/**
 * Returns true if any element of the array passes a certain test
 * Works for std::vector and std::array
 * @param (array, function)
 * @return boolean
 * */
template <typename T, typename lambda>
bool some(const T &array, const lambda &func)
{
  for (const auto &element : array)
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
  std::vector<int> vector = {1, 77, 3, 2, 68};
  std::cout << some(vector, [](const auto &element) {
    return element > 50;
  }) << std::endl;

  std::array<std::string, 3> array = {"Hello", "World", "!"};
  std::cout << some(array, [](const auto &element) {
    return element == "World";
  }) << std::endl;
}