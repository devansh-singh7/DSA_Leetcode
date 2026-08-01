class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        // ASKED IN AMAZON.
        
        int n = fruits.size();
        int low = 0;
        unordered_map <int, int> f;
        int res = INT_MIN;

        // Increasing Window size
        for(int high=0; high<n; high++)
        {
            f[fruits[high]]++;

            while(f.size() > 2)  // Atmost 2 is asked so till 2.
            {
                f[fruits[low]]--;   // Shrinking window

                // Edge Case 
                if(f[fruits[low]] == 0) // Erase 0 frequency variable.
                {
                    f.erase(fruits[low]);
                }
                low++;
            }
            if(f.size() == 2 || f.size() < 2)  // ATmost 2 so, equal and less than 2.
            {
                int len = high - low + 1;
                res = max(res, len);
            }

        }
        return res == INT_MIN ? 0 : res;
    }
};
