#include <iostream>
#include <string>
#include <ctype.h>

/**
 * Returns the string in upper case
 * @param (std::string)
 * @return std::string
 * */
std::string toUpperCase(const std::string &text)
{
  std::string result = "";
  for (const auto &letter : text)
  {
    result += std::toupper(letter);
  }
  return result;
}

int main()
{
  std::cout << toUpperCase("Hello World!") << std::endl;
}