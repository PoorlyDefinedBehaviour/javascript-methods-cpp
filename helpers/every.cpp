#include <iostream>
#include <array>
#include <vector>

/**
 * Tests if every element of an array passes a certain test
 * Works for std::array and std::vector
 * @param (array, function)
 * @return boolean
 * */
template <typename T, typename lambda>
bool every(const T &array, const lambda &func)
{
  for (auto &element : array)
  {
    if (!func(element))
    {
      return false;
    }
  }
  return true;
}

int main()
{
  std::vector<int> evenArray = {2, 4, 6, 8, 10};

  std::cout << every(evenArray, [](auto element) {
    return element % 2 == 0;
  }) << std::endl;

  std::array<int, 5> oddArray = {1, 3, 5, 7, 9};

  std::cout << every(oddArray, [](auto element) {
    return element % 2 == 0;
  }) << std::endl;
}