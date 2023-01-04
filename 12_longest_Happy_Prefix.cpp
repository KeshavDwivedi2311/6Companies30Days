class Solution {
public:
    string longestPrefix(string s) {
//         string suf="",pre="";
//         int i=0,n=s.size();
//         int j=n-1;
//         string ans="";
//             string temp;
//         while(i<n-1 && j>=1)
//         {
//                 pre+=s[i];
//                 suf+=s[j];
                
//                 temp=suf;
//                 //cout<<pre<<" "<<temp<<endl;
//                 reverse(temp.begin(),temp.end());
//                 if(temp==pre)
//                 {
//                     ans=pre;
//                 }
//                 i++;
//                 j--;            
//         }
//         return ans;
        
        /*
        
        deque<char>suf,pre,ans;
        int i=0,n=s.size();
        int j=n-1;
        while(i<n-1 && j>=1)
        {
            pre.push_back(s[i]);
            suf.push_front(s[j]);
            if(suf==pre)
                ans=pre;
            i++;
            j--;
        }
        
        string res="";
        while(!ans.empty())
        {
            res+=ans.front();
            ans.pop_front();
        }
        return res;
        */
        
        vector<int> ans(s.size(),0);
        int i=1,j=0;
        while(i<s.size())
        {
            if(s[i]==s[j])
            {
                ans[i]=j+1;
                i++;j++;
            }
            else
            {
                if(j==0)
                {
                    ans[i]=0;
                    i++;
                }
                else
                {
                    j = ans[j-1];
                }
            }
        }
        
        int len = ans.back();
        return s.substr(0,len);
        
    }
};