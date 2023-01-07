int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,vector<int>>m;
        int n=cards.size();
        for(int i=0;i<n;i++)
        {
            m[cards[i]].push_back(i);
        }
        int ans=INT_MAX;
        for(auto x:m)
        {
            vector<int>temp=x.second;
                for(int i=0;i<temp.size()-1;i++)
                {
                    ans=min(ans,temp[i+1]-temp[i]+1);
                }
   
        }
        if(ans==INT_MAX)
            return -1;
        return ans;
    }