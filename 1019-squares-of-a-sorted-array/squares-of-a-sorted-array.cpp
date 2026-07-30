class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());
        int left_ptr = 0 , right_ptr = nums.size() - 1;
        int move_ptr = nums.size() - 1;
        while(left_ptr <= right_ptr) 
        {
            if(abs(nums[left_ptr]) > abs(nums[right_ptr]))
            {
                res[move_ptr] = nums[left_ptr] * nums[left_ptr];
                left_ptr++;
            }
            else{
                res[move_ptr] = nums[right_ptr] * nums[right_ptr];
                right_ptr--;
            }

            move_ptr--;
        }
        return res;
    }
};

// LOGIC:-

// We take a res vector, in which we point a move_ptr pointer to last of res. Then, we assigned two pointer left_ptr and right_ptr to start and end of nums vector.
// Then, we compare absolute value at nums[left_ptr] and nums[right_ptr], which ever is greater we put it in res[move_ptr]. 
// Then, update the pointers accordingly.
// return res vector.

// HAPPY CODING - DSA 