class Solution {
public:

    // Function to return the max frequency.
    int frequency(vector<int> &a) {
        int max_count = -1;
        for(int i=0; i<256; i++)
        {
            max_count = max(max_count, a[i]);
        }
        return max_count;
    } 

    int characterReplacement(string s, int k) {
        int low = 0, high;
        int n = s.size();
        int res = INT_MIN;
        vector<int> mp(256, 0); // Take a vector ill 256 as all the elements in the Computer Science are total 256.
        // So, when we find a element in a string we update the frequency in this vector.

        for(high=0; high<n; high++)
        {
            mp[s[high]]++; // Add value to vector. 
            // Update the count is done here.

            int len = high - low + 1;
            int max_freq = frequency(mp); // find max frequency of a element.
            int diff = len - max_freq; // the vakue which we need to change.

            while(diff > k)
            {
                mp[s[low]]--;
                low++;
                // No need of erase funcion as we are dealing with a vector/array.

                // Need to find evrything again for next iteration as the value of low changed.
                max_freq = frequency(mp);
                len = high - low + 1;
                diff = len - max_freq;
            }

            if(diff <= k)
            {
                len = high - low + 1;
                res = max(res, len);
            }
        }
        return res;
    }
};
