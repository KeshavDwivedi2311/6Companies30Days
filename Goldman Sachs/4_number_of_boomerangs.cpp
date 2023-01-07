 int numberOfBoomerangs(vector<vector<int>>& points) {
        int n=points.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int x1=points[i][0],y1=points[i][1];
            unordered_map<int,int>m;
            for(int j=0;j<n;j++)
            {
                int x2=points[j][0],y2=points[j][1];
                int d1=x1-x2;
                int d2=y1-y2;
                int dist=d1*d1+d2*d2;
                m[dist]++;
            }
            for(auto x:m)
            {
                ans+=(x.second)*(x.second-1);
            }
        }
        return ans; 
    }