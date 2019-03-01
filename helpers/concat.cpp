#include <iostream>
#include <vector>

/**
 * adds two arrays into a single new array and returns it
 * Works for std::vector
 * @param (array1, array2)
 * @return std::vector
 * */

template <typename T>
std::vector<T> concat(const std::vector<T> &array1, const std::vector<T> &array2)
{
  std::vector<T> newArray = array1;

  for (auto element : array2)
  {
    newArray.push_back(element);
  }

  return newArray;
}

int main()
{
  std::vector<int> array1 = {1, 2, 3, 4, 5};
  std::vector<int> array2 = {6, 7, 8, 9, 10};
  std::vector<int> array3 = concat(array1, array2);

  for (auto element : array3)
  {
    std::cout << element << ", ";
  }
}