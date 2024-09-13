class Solution {
    public int maxProfit(int[] prices) {
        int max=0;
        int minprofit=prices[0];
        for (int i=0;i<prices.length;i++)
        {
            if (prices[i]<minprofit)
                minprofit=prices[i];
            int temp=prices[i]-minprofit;
                if (temp>max)
                    max=temp;
            
        }
        return max;
    }
}