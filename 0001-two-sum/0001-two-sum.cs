using System;
using System.Collections.Generic;
public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        int []arr=new int[2];
        Dictionary <int,int>numbers=new Dictionary <int,int>();
        for (int i=0;i<nums.Length;i++)
        {
            if (numbers.ContainsKey(nums[i]))
                continue;
            numbers.Add(nums[i],i);
        }
        for (int i=0;i<nums.Length;i++)
        {
            int temp=target-nums[i];
//             if (target >=0 || nums[i]>=0)
//             {
//                 temp=Math.Abs(nums[i]-target);
//             }
//             else 
//             {
//                 if (nums[i]>target)
//                 temp=target-nums[i];
//                 else
//                 temp=nums[i]-target;
      
//             }
            
           Console.WriteLine(temp);
            if (numbers.ContainsKey(temp))
            {
                arr[0]=numbers[temp];
                arr[1]=i;
                if (arr[0]==arr[1])
                    continue;
                return arr;
            }
        }
           
        return null;
    }
}