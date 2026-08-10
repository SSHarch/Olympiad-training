#include <iostream>
#include <vector>

bool hasDuplicate(std::vector<int> &nums) {
  for (int i = 1; i < nums.size(); i++) {
    if (nums[i] == nums[i - 1]) {
      return true;
    }
  }
  return false;
}

int main() {
  std::vector<int> numbers = {5, 5, 5, 5, 5};
  std::cout << std::boolalpha << hasDuplicate(numbers) << std::endl;
  return 0;
}
