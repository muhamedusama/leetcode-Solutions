class Solution {
    public void rotate(int[] nums, int k) {
               int [] copy= new int[nums.length];
        for (int i=0;i<nums.length;i++)
        {
            copy[i]=nums[i];
        }
        
        for (int i=0;i<copy.length;i++)
        {
            int temp=(i+k)%nums.length;
            nums[temp]=copy[i];
        }
        return ;
    }
}