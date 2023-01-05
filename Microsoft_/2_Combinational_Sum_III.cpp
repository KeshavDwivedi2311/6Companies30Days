vector<vector<int>>res;
    vector<int>temp;
    void comb(vector<int>nums,int n,int sum,int k)
    {
        if(sum==0 && k==0)
        {
            res.push_back(temp);
            return;
        }
        if(sum<0 || n<0)
            return;
        temp.push_back(nums[n]);
        comb(nums,n-1,sum-nums[n],k-1);
        temp.pop_back();
        comb(nums,n-1,sum,k);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>nums;
        for(int i=1;i<=9;i++)
            nums.push_back(i);
        comb(nums,8,n,k);
        return res;
    }