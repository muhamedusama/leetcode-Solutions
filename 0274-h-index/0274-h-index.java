import java.util.*;
class Solution {
    public int hIndex(int[] citations) {
        Arrays.sort(citations);
        //reverse the sorted array 
        for (int i = 0; i < citations.length / 2; i++) {
            int temp = citations[i];
            citations[i] = citations[citations.length - 1 - i];
            citations[citations.length - 1 - i] = temp;
        }
        // the algorithm to solve the problem
        int hindex=0;
        for (int i=0;i<citations.length;i++)
        {
            if (citations[i]>=i+1)
                hindex=i+1;
            else
                break;
        }
        return hindex;
    }
}