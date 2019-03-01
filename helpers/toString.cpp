#include <iostream>
#include <vector>
#include <array>
#include <string>

/**
 * adds every element of the array to a single std::string and returns it;
 * Works for std::vector and std::array
 * @param (array)
 * @return std::string
 * */

template <typename T>
std::string toString(const T &array)
{
  std::string resultString = "";

  for (auto element : array)
  {
    resultString += ((char)element + '0');
  }

  return resultString;
}

int main()
{
  std::vector<int> vector = {1, 2, 3, 4, 5};
  std::cout << toString(vector) << std::endl;

  std::array<int, 5> array = {5, 4, 3, 2, 1};
  std::cout << toString(array) << std::endl;
}