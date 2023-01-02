int findUnsortedSubarray(vector<int>& nums) {
        
        /*
         int findUnsortedSubarray(vector<int>& nums) {
        vector<int>copy=nums;
        sort(copy.begin(),copy.end());
        int s=-1,e=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=copy[i])
            {
                if(s==-1)
                {
                    s=i;
                }
                e=i;
            }
        }
        if(s==-1)
            return 0;
        else 
            return e-s+1;
    }
    
    O(N)
        
        */
        
        
        /****O(log N)****/
        vector<int>copy=nums;
        sort(copy.begin(),copy.end());
        int s=-1,e=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=copy[i])
            {
                if(s==-1)
                {
                    s=i;
                }
                e=i;
            }
        }
        if(s==-1)
            return 0;
        else 
            return e-s+1;
    }