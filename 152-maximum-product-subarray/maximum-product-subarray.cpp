class Solution {
public:
    int maxProduct(vector<int>& nums) {
  
        // Kadane's Algorithm Pattern.

        // TC: O(n)
        // SC: O(1)

        int n = nums.size();
        int max_end = nums[0];
        int min_end = nums[0];
        int res = nums[0];

        for(int i=1; i<n; i++)
        {
            int p1 = nums[i];
            int p2 = max_end * nums[i];
            int p3 = min_end * nums[i]; // For -ve elements in vector.

            max_end = max(p1, max(p2, p3)); // For positive
            min_end = min(p1, min(p2, p3)); // For negative.

            res = max(res, max(max_end, min_end));
        }
        return res;
    }
};