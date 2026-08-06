class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        // Fast & Slow Pointer Algorithm

        int slow = 0, fast = 0;

        while(true)
        {
            slow = nums[slow]; // 1-Step increase.

            // 2-Step increase.
            fast = nums[nums[fast]];

            if(slow == fast) // Cycle detection
            {
                slow = 0; // slow pointed to initial point 

                while(slow != fast)
                {
                    // Starting Point
                    slow = nums[slow];
                    fast = nums[fast];
                }
                return slow;
            }
        }
        return 0;
    }
};