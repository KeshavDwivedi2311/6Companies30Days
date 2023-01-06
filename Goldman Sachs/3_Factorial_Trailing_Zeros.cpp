 /*
        This question is pretty straightforward.

        Because all trailing 0 is from factors 5 * 2.

        But sometimes one number may have several 5 factors, for example, 25 have two       5 factors, 125 have three 5 factors. In the n! operation, factors 2 is always           ample. So we just count how many 5 factors in all number from 1 to n.
    */
    int trailingZeroes(int n) {
             int res = 0;
        for(long long i=5; n/i>0; i*=5){
            res += (n/i);
        }
        return res;
    }