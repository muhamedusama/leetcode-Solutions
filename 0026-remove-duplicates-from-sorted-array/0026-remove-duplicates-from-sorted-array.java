class Solution {
    public int removeDuplicates(int[] nums) {
        if (nums.length==0)
            return 0;
        int counter=1;
        for (int i=1;i<nums.length;i++)
        {
          if (nums[i]!=nums[i-1])
          {
              nums[counter]=nums[i];
              counter++;
          }
        }
        System.out.println(counter);
        return counter;
        
    }
}