#include <iostream>
#include <vector>

/**
 * reverses an array passsed in by reference
 * Works for std::vector
 * @param (array)
 * @return void
 * */

template <typename T>
void reverse(T &array)
{
  T tempArray;
  for (int i = array.size() - 1; i > -1; i--)
  {
    tempArray.push_back(array[i]);
  }

  for (int i = 0, n = tempArray.size(); i < n; i++)
  {
    array[i] = tempArray[i];
  }
}

int main()
{
  std::vector<int> vector = {1, 2, 3, 4, 5};
  reverse(vector);
  for (auto element : vector)
  {
    std::cout << element << std::endl;
  }
}
