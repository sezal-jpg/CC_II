class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalSum = 0;
        int maxLinearSum = nums[0];
        int minLinearSum = nums[0];
        int currentMax = 0;
        int currentMin = 0;
        
        for (int x : nums) {
            totalSum += x;
            
           
            currentMax = max(x, currentMax + x);
            maxLinearSum = max(maxLinearSum, currentMax);
       
            currentMin = min(x, currentMin + x);
            minLinearSum = min(minLinearSum, currentMin);
        }
        

        if (maxLinearSum < 0) {
            return maxLinearSum;
        }
        
  
        return max(maxLinearSum, totalSum - minLinearSum);
    }
};
