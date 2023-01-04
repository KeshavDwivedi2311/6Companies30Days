class Solution {
public:
    /*** BRUTE FORCE ****/
    
    /*
    int maxim=0;
    vector<int>res,temp;
    int dp[10000];
    void solve(vector<int>&nums,int ind,int prev)
    {
        if(ind>=nums.size())
        {
            if(maxim<temp.size())
            {
                maxim=temp.size();
                res=temp;
            }
            return;
        }
       
        if(nums[ind]%prev==0)
        {
            temp.push_back(nums[ind]);
            solve(nums,ind+1,nums[ind]);
            temp.pop_back();
            solve(nums,ind+1,prev);
        }
        else
            solve(nums,ind+1,prev);
    }
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        solve(nums,0,1);
        return res;
    }
    */
    vector<int> largestDivisibleSubset(vector<int>& nums) {
         if(nums.size()==0){
            return nums;
        }
        sort(nums.begin(),nums.end());
        int flag=1;
        if(nums[0]==1){
            flag=0;
        }
        else{
            nums.push_back(1);
            flag=1;
        }
        sort(nums.begin(),nums.end());
        int i,j;
        int dp[nums.size()][2];
        for(i=nums.size()-1;i>=0;i--){
            dp[i][0]=0;
            dp[i][1]=i;
            for(j=i+1;j<nums.size();j++){
                if((nums[j]%nums[i])==0){
                    if(dp[j][0]>dp[i][0]){
                        dp[i][0]=dp[j][0];
                        dp[i][1]=j;
                    }  
                }
            }
            dp[i][0]++;
        }
        i=0;
        vector<int> t;
        t.push_back(nums[i]);
        while(dp[i][1]!=i){
            i=dp[i][1];
            t.push_back(nums[i]);
            
        }
        if(flag==1){
            t.erase(t.begin());
        }
        return t;
    }
};