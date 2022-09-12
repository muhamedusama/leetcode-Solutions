class Solution {
public:
    int binarysearch (int start,int end,vector<int>& nums, int target,int &index)
    {
        if (start>end)
            return 0;
        int mid=(start+end)/2;
        if (nums[mid]==target)
            index=mid;
        else if (nums[mid]>target)
            binarysearch(start,mid-1,nums,target,index);
        else if (nums[mid]<target)
            binarysearch(mid+1,end,nums,target,index);
        return index;
    }
    int searchInsert(vector<int>& nums, int target) {
        int index=-1;
        int end=nums.size()-1,start=0;  
        binarysearch(start,end,nums,target,index);
   /*     if (index==-1 && binarysearch(start,end,nums,target-1,index)!=-1)
        {
         index+=1;
        }
          else if (index==-1 && binarysearch(start,end,nums,target-1,index)==-1)
        {
         index=-1;
        }*/
    for (int i=1;index==-1;i++)
    {
           binarysearch(start,end,nums,target+i,index);
            if (index==-1)
            {
                binarysearch(start,end,nums,target-i,index);
                if (index!=-1)
                    index+=1;
            }
    }
        return index;
    }
};