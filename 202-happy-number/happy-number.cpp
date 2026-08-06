class Solution {
public:

    // Time Complexity: O(log n)
    // Space Complexity: O(1)
    
    // Function to get sum
    int fun(int n){
        int sum = 0;
        while(n > 0)
        {
            int d = n % 10; 
            n = n / 10;
            sum += d * d; // d gets the last digit. 
        }
        return sum;
    }

    bool isHappy(int n) {

        int slow = n, fast = n;

        while(fast != 1) 
        {
            slow = fun(slow);   // 1-Step 
            fast = fun(fun(fast));     // 2-Step 

            if(slow == fast && slow != 1) // Cycle check
            {
                return false;
            }
        }
        return true;
    }
};