class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());
        long closest_sum = INT_MIN;
        int n = nums.size();

        // N-2 because minimum 3 elements required.
        for(int i=0; i<n-2; i++)
        {
            int left = i+1; // i=0 then, left=i+1
            int right = n-1;// n-1 will be last element

            while(left < right)
            {
                int current_sum = nums[i] + nums[left] + nums[right];

                if(current_sum == target)
                {
                    return current_sum;
                }
                // Update the current_sum value.
                if(abs(current_sum - target) < abs(closest_sum - target))
                {
                    closest_sum = current_sum;
                }
                // Updates for pointer left++ / right--
                if(current_sum < target)
                {
                    left++;
                }
                else{
                    right--;
                }
            }
        }

        return closest_sum;
    }
};