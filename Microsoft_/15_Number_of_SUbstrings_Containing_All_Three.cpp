class Solution {
public:
    int numberOfSubstrings(string s) {
      unordered_map<char,int>m;
        int s_ind=0,i=0,end=s.size()-1;
        int ans=0;
        while(i<s.size())
        {
            m[s[i]]++;
            while(m['a'] && m['b'] && m['c'])
            {
                ans+=(end-i+1);
                    m[s[s_ind]]--;
                s_ind++;
            }
            i++;
        }
        return ans;
        
        /*
        ALGORITHM
        Ans :
        => let good window : window fulfilling condition

        while(right != s.size())
        {
              We tries to form a good window of any size

              Now once we have a good window , we add (1 + (end - right)) to count and then shrink this good window from front and form a new window [if new window is also a good window we repeat the same process]

              Above line in code is like this!!!
              while(window is good)
              {
                  count += (1 + (end - right));
                  shrink window from front to form new window
              }
        }


      [v. imp] why we are adding extra (end - right) to count?
          Ans : because by adding this we are actually considering all those substrings which are bigger in size than current substring and also fully contains our current substring!!!
        */
    }
};