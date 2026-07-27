class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int single = 0;
        if(n == 1) return nums[0];
        for(int i=1;i<n-1;i++){
            if(nums[i] != nums[i-1] && nums[i] != nums[i+1]) single = nums[i];
            if(nums[n-1] != nums[n-2]) single = nums[n-1];
            if(nums[0] != nums[1]) single = nums[0];
        }
        return single;
    }
};