
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mp;
        unordered_set<int>s;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
            
        }
        for(auto it=mp.begin(); it!=mp.end();it++)
        {
            s.insert(it->second);
        }
        if(s.size()==mp.size())
        {
            return true;
        }
        else
        {
            return false;
        }
       
    }

