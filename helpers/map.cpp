#include <iostream>
#include <vector>

/**
 * Loops through an array and passes each element of the array as argument to a function
 * at the end, returns a new array;
 * Works for std::vector
 * @param (array, function)
 * @return std::vector
 * */

template <typename T, typename lambda>
std::vector<T> map(const std::vector<T>& array, const lambda& func){

  std::vector<T> newArray;

  for(auto element : array){
    newArray.push_back(func(element));
  }

  return newArray;
}

int main(){
  std::vector<int> array = {1, 2, 3, 4, 5};

  std::vector<int> mappedArray = map(array, [](auto element){
    return element * element;
  });

  for(auto element : mappedArray){
    std::cout << element << std::endl;
  }
}