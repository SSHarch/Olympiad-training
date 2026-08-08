#include <iostream>
#include <string>
#include <algorithm>

int K = 7;  //number of characters on a line
int N = 10; //number of words
std::string essay = "Bessie is tasty"; // Bessie's essay

int main(){
  //std::cout << "Please print your essay: ";
  //std::cin >> essay;

  std::size_t total_chars = essay.size();
  auto space_count = std::count(essay.begin(), essay.end(), ' ');
  std::size_t chars_without_spaces = total_chars - space_count;
  
  std::cout << "Characters without spaces: " << chars_without_spaces << "\n";
  std::cout << space_count;

  return 0;
}
