class Solution {
    public int majorityElement(int[] nums) {
        HashMap<Integer, Integer> map = new HashMap<>();
       for (int i=0;i<nums.length;i++)
       {
           int temp=0;
           if (map.get(nums[i])!=null)
           {
                temp=map.get(nums[i]);
                temp++;
           }
           map.put(nums[i],temp);
       }
        int maxKey = 0;
          int maxValue = Integer.MIN_VALUE;
        
        // Iterate through the HashMap to find the highest value
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            if (entry.getValue() > maxValue) {
                maxValue = entry.getValue();
                maxKey = entry.getKey();
            }
        }
        return maxKey;
    }
}