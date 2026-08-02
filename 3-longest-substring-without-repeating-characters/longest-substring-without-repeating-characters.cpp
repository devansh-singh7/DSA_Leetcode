class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        // HARD QUESTION: Revision Required.

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

                K = high -low + 1;
            }

            int len = high - low + 1;
            res = max(res, len);
        }

        return res == INT_MIN ? 0 : res;
    }
};