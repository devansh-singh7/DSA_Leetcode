class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        // Kadane's Algorithm Pattern

        // TC: O()
        // SC: O()

        int ans = nums[0];
        int best_end = nums[0];
        int n = nums.size();

        for(int i=1; i<n; i++)
        {
            int v1 = best_end + nums[i];
            int v2 = nums[i];

            best_end = max(v1, v2); // Best_end has the maximum value of the two cases..
            ans = max(ans, best_end);
        }
        return ans; 
    }
};