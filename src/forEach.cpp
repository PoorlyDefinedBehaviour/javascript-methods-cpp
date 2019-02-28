#include <iostream>
#include <array>
#include <vector>

/**
 * Loops through an array.
 * Works for std::array and std::vector
 * @param (array, function)
 * @return void
 * */

template <typename T, typename lambda>
void forEach(T array, lambda func){
  for(auto element : array){
    func(element);
  }
}

int main() {
  std::array<int, 5> array = {1,2,3,4,5};
  forEach(array, [](auto element){
    std::cout << element << std::endl;
  });

  std::vector<int> array2 = {5,4,3,2,1};
  forEach(array2, [](auto element){
    std::cout << element << std::endl;
  });
}