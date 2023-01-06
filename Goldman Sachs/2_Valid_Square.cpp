int distance_(vector<int>&a1,vector<int>&b1)
    {
        return ((a1[0]-b1[0])*(a1[0]-b1[0]) +(a1[1]-b1[1])*(a1[1]-b1[1]));
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        int s1=distance_(p1,p3);
        int s2=distance_(p2,p3);
        int s3=distance_(p2,p4);
        int s4=distance_(p4,p1);
        int d1=distance_(p1,p2);
        int d2=distance_(p3,p4);
        unordered_set<int>s;
         s.insert(s1);
         s.insert(s2);
         s.insert(s3);
         s.insert(s4);
         s.insert(d1);
         s.insert(d2);        
        return !s.count(0) && s.size() == 2;
       
    }