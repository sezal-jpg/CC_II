#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
   
        if (nums.empty()) return 0;

     
        int currentMax = nums[0];
        int currentMin = nums[0];
        int globalMax = nums[0];

        for (size_t i = 1; i < nums.size(); i++) {
            int num = nums[i];


            if (num < 0) {
                swap(currentMax, currentMin);
            }
            currentMax = max(num, currentMax * num);
            currentMin = min(num, currentMin * num);

            globalMax = max(globalMax, currentMax);
        }

        return globalMax;
    }
};
