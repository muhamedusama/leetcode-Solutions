class Solution {
    public int[] getConcatenation(int[] nums) {
        int arr[]= new int[nums.length*2];
        int counter=0;
        for (int i=0;i<nums.length;i++)
        {
            arr[i]=nums[i];
            counter=i+1;
        }
        for (int i=0;i<nums.length;i++)
        {
            arr[counter]=nums[i];
            counter++;
        }
        return arr;
    }
}