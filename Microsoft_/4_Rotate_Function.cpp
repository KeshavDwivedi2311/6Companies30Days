int maxRotateFunction(vector<int>& nums) {
        int totalSum=0;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            totalSum+=nums[i];
            ans+=(i*nums[i]);
        }
        int maxAns=ans;
        for(int i=nums.size()-1;i>=1;i--)
        {
            ans=ans+totalSum- (nums.size()*nums[i]);
            maxAns=max(maxAns,ans);
        }
        return maxAns;
    }
    /*
        EXPLANATION:
        F(k) = 0 * Bk[0] + 1 * Bk[1] + ... + (n-1) * Bk[n-1]
F(k-1) = 0 * Bk-1[0] + 1 * Bk-1[1] + ... + (n-1) * Bk-1[n-1]
       = 0 * Bk[1] + 1 * Bk[2] + ... + (n-2) * Bk[n-1] + (n-1) * Bk[0]
Then,

F(k) - F(k-1) = Bk[1] + Bk[2] + ... + Bk[n-1] + (1-n)Bk[0]
              = (Bk[0] + ... + Bk[n-1]) - nBk[0]
              = sum - nBk[0]
Thus,

F(k) = F(k-1) + sum - nBk[0]
    */