class Solution {
public:
        int binarysearch(int start,int end,int target,vector<int>& nums,int &index)
    {
        if (start>end)
            return -1;
        int mid=(start+end)/2;
        if (nums[mid]==target)
            return index=mid;
        else if (target>nums[mid])
            binarysearch(mid+1,end,target,nums,index);
        else
            binarysearch(start,mid-1,target,nums,index);
        return index;    
    }
 
    int search(vector<int>& nums, int target ) {
        int x=-1;
        return binarysearch(0,nums.size()-1,target,nums,x);
    }
   
};