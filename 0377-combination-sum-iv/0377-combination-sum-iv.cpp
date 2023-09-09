class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
//         it will be better if we do it with dynamic programming dp
        vector<unsigned>dp(target+1, 0);
        dp[0] = 1;
        for(int i=1;i<=target;i++){
            for(int y: nums){
                if(i>=y){
                    dp[i]+= dp[i-y];
                }
            }
            
        }
        return dp[target];
    }
};