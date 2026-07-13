class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int a=0,b=nums.size()-1,m;
        
        while(a<=b)
        {
            m= a+(b-a)/2;
            if(nums[m]==target)
            {
                return m;
            }
            else if(nums[m]<target)
            {    a=m+1;
                
            }
            else
            { 
                b=m-1;
              
            }
        }
        return a;
    }
};