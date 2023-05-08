class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i] != i+1)
                ans=i+1;
        }
        return ans;
        
    }
};