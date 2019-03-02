#include <iostream>
#include <array>
#include <vector>

/**
 * Loops through an array and searches for the provided value, if found returns true,
 * otherwise returns false;
 * Works for std::array and std::vector
 * @param (array, value)
 * @return boolean
 * */

template <typename T, typename TYPE>
bool includes(const T &array, TYPE value)
{
  for (auto &element : array)
  {
    if (element == value)
    {
      return true;
    }
  }

  return false;
}

int main()
{
  std::vector<int> vector = {1, 2, 3, 4, 5};
  std::cout << includes(vector, 3) << std::endl;

  std::array<int, 5> array = {1, 2, 3, 4, 5};
  std::cout << includes(array, 10) << std::endl;
}