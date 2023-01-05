 int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int g=numsDivide[0];
        for(auto x:numsDivide)
        {
            g=gcd(x,g);
        }
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(nums[i]>g)
            {
                break;
            }
            if(g%nums[i]==0)
                return i;
        }
        return -1;
    }
    /*
    
    Explanation
"divides all the elements of numsDivide"
equals to
"divides gcd of all the elements of numsDivide"
where gcd is the greatest common divisor.

So the first step, find out the gcd of numsDivide,
then sort input nums A,
and find out the smallest element A[i] in A divides gcd.

We need to remove all elements smaller than A[i].
If no such A[i], return -1


Complexity
Time O(nlogn + m + gcd), where gcd = log(max(numsDivide)
Space O(1)

*/