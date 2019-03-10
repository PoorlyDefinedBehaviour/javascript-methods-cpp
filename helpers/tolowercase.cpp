#include <iostream>
#include <string>
#include <ctype.h>

/**
 * Returns the string in lower case
 * @param (std::string)
 * @return std::string
 * */
std::string toLowerCase(const std::string &text)
{
  std::string result = "";
  for (const auto &letter : text)
  {
    result += std::tolower(letter);
  }
  return result;
}

int main()
{
  std::cout << toLowerCase("Hello World!") << std::endl;
}