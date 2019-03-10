#include <iostream>
#include <vector>

/**
 * Returns a new array with the elements tha passed a certain test
 * Works for std::vector
 * @param (array, function)
 * @return std::vector
 * */
template <typename T, typename lambda>
std::vector<T> filter(const std::vector<T> &array, const lambda &func)
{
  std::vector<T> newArray;

  for (const auto &element : array)
  {
    if (func(element))
    {
      newArray.push_back(element);
    }
  }
  return newArray;
}

int main()
{
  std::vector<int> array = {1, 2, 3, 4, 5};
  std::vector<int> evenNumbers = filter(array, [](const auto &element) {
    return element % 2 == 0;
  });

  for (const auto &element : evenNumbers)
  {
    std::cout << element << std::endl;
  }
}