#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        int i = 0;
        int n = nums.size();

        while (i < n) {
            if (seen.contains(nums[i])) {
                return true;
            } else {
                seen.insert(nums[i]);
            }
            i++;
        }

        return false;
    }
};