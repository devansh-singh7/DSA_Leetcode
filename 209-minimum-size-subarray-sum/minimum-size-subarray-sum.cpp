class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low = 0;
        int high = 0; // Variable window so minimum window length will be atleast one.
        int sum = 0;
        int n = nums.size();
        int res = INT_MAX;

        while(high < n)
        {
            // Hiring process/ Expanding the window.
            sum = sum + nums[high]; 

            while(sum >= target)  // Condition asked in the question.
            {
                int len = high - low + 1;  // Finding length of window/subarray.
                res = min(res, len);  // FInding minimum length of subarray.

                // Firing process/ Shrinking the window.
                sum = sum - nums[low];
                low++;
            }
            high++;
        }
        // When we don't find any subarray return 0.
        return res == INT_MAX ? 0 : res;   
    }
};