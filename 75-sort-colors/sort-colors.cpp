class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n = nums.size();
        int low = 0, mid = 0, high  = n-1;

        // Dutch National Flag Algorithm.

        // Both mid and low will be pointing Arrays/vectors first element and high will point last element.

        // Points to Remember: 

        //  0's -> 0 to low-1
        // 1's -> low to mid-1
        // 2's -> high+1 to n-1

        // Unsorted part -> mid to high 

        while(mid <= high)
        {
            if(nums[mid] == 0)  // When 0 is present at the mid.
            {
                swap(nums[low], nums[mid]);
                mid++;
                low++;
            }
            else if(nums[mid] == 1)  // When 1 is present at the mid.
            {
                mid++;
            }
            else 
            {
                swap(nums[high], nums[mid]);  // When 2 is present at mid.
                high--;
            }
        }
    }
};
