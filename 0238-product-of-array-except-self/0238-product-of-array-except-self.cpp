class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int multresult=1;
        bool flag=false;
        int noofzeros=0;
        int n=nums.size();
        for (int i=0;i<n;i++)
        {
            if (nums[i]==0)
            {
                flag=true;
                noofzeros++;
            }
            else
            {
               multresult*=nums[i]; 
            }
        }
        //cout<<multresult<<endl;
        vector<int>ans;
        for (int i=0;i<n;i++)
        {
            if (noofzeros>1)
            {
                ans.push_back(0);
                continue;   
            }
            if (flag==true && nums[i]!=0)
                ans.push_back(0);
            else if (flag==true && nums[i]==0)
                ans.push_back(multresult);
            else 
            {
                ans.push_back(multresult/nums[i]);
            }
        }
        return ans;
    }
};