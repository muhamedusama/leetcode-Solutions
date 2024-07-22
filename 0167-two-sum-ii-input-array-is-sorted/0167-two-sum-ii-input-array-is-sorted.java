class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int arr[] = new int[2];
        int counter=0;
        int frequencyarray[]= new int [4010];
        
        for (int i=0;i<numbers.length;i++)
        {
         frequencyarray[numbers[i]+1000]++;
        }
      //  System.out.println(frequencyarray[1007]);
       
        for (int i=0;i<numbers.length;i++)
        {
            int temp=target-numbers[i];
            System.out.println(temp);
            
            if (frequencyarray[temp+1000]>0 && temp!=numbers[i])
            {
                arr[counter]=i+1;
                counter++;
            }
             if (frequencyarray[temp+1000]>1)
            {
                arr[counter]=i+1;
                counter++;
            }
        }
        return arr;
        
    }
}