class Solution {
    public int removeDuplicates(int[] nums) {
        if (nums.length<3)
            return nums.length;
        int counter=2;
        for (int i=2;i<nums.length;i++)
        {
            if (nums[i]!=nums[counter-2])
            {
                nums[counter++]=nums[i];
            }
        }
        return counter;
    }
}