#include <iostream>
#include <vector>

/**
 * Loops through an array and passes each element of the array as argument to a function,
 * if the function returns true, it adds the element to the array that will be returned;
 * Works for std::vector
 * @param (array, function)
 * @return std::vector
 * */

template <typename T, typename lambda>
std::vector<T> filter(const std::vector<T>& array, const lambda& func){

  std::vector<T> newArray;

  for(auto element : array){
    if(func(element)){
      newArray.push_back(element);
    }
  }

  return newArray;
}

int main() {
  std::vector<int> array = {1, 2, 3, 4, 5};
  std::vector<int> evenNumbers = filter(array, [](auto element){
    return element % 2 == 0;
  });

  for(auto element : evenNumbers){
    std::cout << element << std::endl;
  }
}