class Solution {
public:
   int mySqrt(int x) {
        if(x==1)
        return 1;
         int ans=0;
        for(int i=1;i<=x/2;i++)
        {
            if(x/i<i)
            break;
            ans=i;
        }
        return ans;
    }
};
