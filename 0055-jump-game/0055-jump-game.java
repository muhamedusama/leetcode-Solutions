class Solution {
    public boolean canJump(int[] nums) {
        int counter=0;
        
        for (int i=0;i<nums.length-1;i++)
        {
            counter--;
            if (nums[i]>counter)
                counter=nums[i];      
            if (counter<=0 )
                return false;
        }
        return true;
    }
}