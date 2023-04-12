class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0,digitsum=0;
        for (int i=0;i<nums.size();i++)
        {
            int temp=nums[i];
            sum+=nums[i];
            while(temp>0)
            {
                digitsum+=temp%10;
                temp/=10;
            }
        }
        return abs(sum-digitsum);
    }
};