string getHint(string secret, string guess) {
        unordered_map<char,int>m;
        for(auto x:secret)
            m[x]++;
        int n=secret.length();
        int bulls=0,cows=0;
        for(int i=0;i<n;i++)
        {
            if(secret[i]==guess[i])
            {
                bulls++;
                m[secret[i]]--;
            }                 
        }
        for(int i=0;i<n;i++)
        {
            if(secret[i]!=guess[i])
            {
                if(m.find(guess[i])!=m.end())
                {
                    if(m[guess[i]]!=0){
                        cows++; 
                    m[guess[i]]--;
                    }
                }
            }
        }
        return to_string(bulls)+"A"+to_string(cows)+"B";
    }