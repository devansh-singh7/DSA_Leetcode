class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int officer = 0;
        int uniEle = 1;
        int cm = 1;
        int n = nums.size();

        // cm checks the person and officer will be present at the begining to allot house.

        while(cm < n)
        {
            if(nums[cm] == nums[cm - 1])
            {
                cm++;
                continue;
                // until we are getting same elemet that is same as present at officer.
            }
            
            // After finding a uniques element.

            nums[officer + 1] = nums[cm];
            officer++;
            uniEle++;
            cm++;
        }

        return uniEle;

    }
};