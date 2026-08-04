class Solution {
public:

    bool sahi_fxn(vector<int> &need, vector<int> &have)
    {
        for(int i=0; i<256; i++)
        {
            if(have[i] < need[i])
            return false;
        }
        return true;
    }
    
    string minWindow(string s, string t) {

        int res = INT_MAX;
        int low = 0, i, high;
        int n = s.size();
        int start = -1;
        int m = t.size();

        vector<int> have(256, 0);
        vector<int> need(256, 0);
        
        if(n<m) return "";
        for(i=0; i<m; i++)
        {
            need[t[i]]++;
        }

        for(high=0; high<n; high++)
        {
            have[s[high]]++;

            while(sahi_fxn(need, have))
            {
                int len = high - low + 1;
                if(res > len)
                {
                    res = len; // End Point
                    start = low; // Starting Point
                }
                have[s[low]]--;
                low++;
            }
        }
        return res == INT_MAX ? "" : s.substr(start, res);
    }
};