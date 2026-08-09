#include <iostream>
#include <vector>

int last_number;
bool duplicate;

class Solution {
public:
  bool hasDuplicate(std::vector<int> &nums) {
    for (int i; i < nums.size(); i++) {
      if (last_number == nums[i]) {
        duplicate = true;
      } else {
        last_number = nums[i];
        // duplicate = false;
      }
    }
    return duplicate;
  }
};

int main() {
  Solution sol;
  std::vector<int> numbers = {1, 2, 3, 4, 5};
  std::cout << sol.hasDuplicate(numbers);
  return 0;
}
