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

    Hello Sir, Hope you are doing well. I am Keshav, Final year (MCA) student at National Institute Of Technology Calicut and upcoming SDE at Amdocs. I am looking for a job opportunity at Morgan Stanely. Could you please refer me to the Job Opening (Job ID:-13402 , Job Link: https://morganstanley.tal.net/vx/candidate/apply/13402 It will speed up the timeline of the process of my Interview. I believe my skills are coupled with the job role. I feel that I am ready for Adobe SDE Interviews, I just need a chance. It would be great if you could refer me or refer my resume to the concerned person in your organization. I have attached my resume in case you would like to know more I would be grateful to receive a response from you.  Coding Profile:https://auth.geeksforgeeks.org/user/mrantivirus/practice/  https://leetcode.com/educateddube/ Resume: https://drive.google.com/file/d/1ZJRYY6sK-fxyR_xtIary9OpSr-SXiusb/view?usp=sharing  Email:- keshavdwivedinitc@gmail.com  Mobile no:- 6392812147  Thanks


    7 7 7 7 7 7 7 rem=1 2+1
    7 7 7 7 7 7 7 7 rem=2 2+1
    7 7 7 7 7 7 7 7 7 rem=0