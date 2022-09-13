class Solution {
public:
    void moveZeroes(vector<int>& nums) {
vector<int> tmp;
int c=0;
for(int i=0;i<nums.size();i++)
{
if(nums[i]==0)
{
c++;
}
else
{
tmp.push_back(nums[i]);
}
}
for(int i=0;i<c;i++)
{
tmp.push_back(0);
}
nums=tmp;
}
        
    
};