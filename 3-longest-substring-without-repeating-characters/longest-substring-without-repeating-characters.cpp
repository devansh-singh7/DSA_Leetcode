class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        // SLIDING - WINDOW
        
        // MEDIUM To HARD QUESTION: But more on the harder side. For understanding the K value.

        // REVISION IS REQUIRED 100%.

        int low = 0;
        int n = s.size();
        int res = INT_MIN;

        unordered_map<int, int> f; // Hash Map

        for(int high=0; high<n; high++)
        {
            f[s[high]]++;

            int K = high - low + 1;

            // CASE 1:
            while(f.size() < K)
            {
                f[s[low]]--;
                 
                // Shrink window from the left until there are no duplicate characters 
                if(f[s[low]] == 0)
                {
                    f.erase(s[low]);
                }

                low++;
                // We need to calculate the K value again as low value is changes (as low++).
                // So, new K is required.
                K = high -low + 1;
            }

            int len = high - low + 1;
            res = max(res, len);
        }

        return res == INT_MIN ? 0 : res;
    }
};
