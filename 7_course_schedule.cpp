class Solution {
public:
    bool dfs(int t,vector<int>adj[],vector<int>&vis,vector<int>&rec)
    {
        if(!vis[t])
        {
            vis[t]=1;
            rec[t]=1;
            for(auto x:adj[t])
            {
                if(!vis[x]&& dfs(x,adj,vis,rec))
                    return true;
                else if(rec[x])
                    return true; 
            }
        }
        rec[t]=0;
        return false;
    }
    bool canFinish(int V, vector<vector<int>>& pre) {
        vector<int>adj[V];
        vector<int>vis(V,0);
        vector<int>rec(V,0);
        for(int i=0;i<pre.size();i++)
        {
            adj[pre[i][1]].push_back(pre[i][0]);
        }
        for(int i=0;i<V;i++)
        {
            if(dfs(i,adj,vis,rec))
                return false;
        }
        return true;
    }
};