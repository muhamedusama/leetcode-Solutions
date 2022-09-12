// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
            long long binarysearch(long long start,long long end,long long &index)
    {
        if (start>end)
            return -1;
        long long mid=(start+end)/2;
        if (isBadVersion(mid)==true && isBadVersion(mid-1)==false)
            return index=mid;
        else if (isBadVersion(mid)==true)
            binarysearch(start,mid-1,index);
                else
            binarysearch(mid+1,end,index);
     
        return index;    
    }
   long long firstBadVersion(long long n) {
           long long x=-1;
        return binarysearch(1,n,x);
    }
};