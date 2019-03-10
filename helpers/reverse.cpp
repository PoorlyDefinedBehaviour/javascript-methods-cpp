#include <iostream>
#include <vector>

/**
 * Takes an array and returns it's elements reversed;
 * Works for std::vector
 * @param (std::vector)
 * @return std::vector
 * */
template <typename T>
std::vector<T> reverse(const std::vector<T> &array)
{
  std::vector<T> newArray;

  for (int i = array.size() - 1; i > -1; i--)
  {
    newArray.push_back(array[i]);
  }
  return newArray;
}

int main()
{
  std::vector<int> array = {1, 2, 3, 4, 5};

  std::vector<int> reversedArray = reverse(array);
  for (const auto &number : reversedArray)
  {
    std::cout << number << " ";
  }
}
