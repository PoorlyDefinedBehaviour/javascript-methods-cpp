#include <iostream>
#include <array>
#include <vector>

/**
 * Loops through an array and passes each element of the array as argument to a function,
 * transforms what the function returns to a single value that will be returned at the end.
 * Works for std::array and std::vector
 * @param (array, function)
 * @return T
 * */

template <typename T, typename lambda>
auto reduce(const T &array, const lambda &func)
{
  auto result = array[0] - array[0];

  for (const auto &element : array)
  {
    result = func(result, element);
  }
  return result;
}

int main()
{
  std::vector<int> array = {1, 2, 3, 4, 5};

  std::cout << reduce(array, [](auto accum, auto element) {
    return accum + element;
  });
}