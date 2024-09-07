class Solution {
    public int removeElement(int[] nums, int val) {
           int removeno=0;
        for (int i=0 ; i<nums.length;i++)
        {
            if (nums[i]==val)
            { 
                removeno++;
                nums[i]=101;
            }
        }
        Arrays.sort(nums);
        System.out.println(removeno);
        return nums.length-removeno;
    }
}