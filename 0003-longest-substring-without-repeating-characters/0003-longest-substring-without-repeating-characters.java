class Solution {
    public int lengthOfLongestSubstring(String s) {
       String x =new String();
        int c=0,biggestcounter=0;
        for (int i=0;i<s.length();i++)
        {
            for (int j=i;j<s.length();j++)
            {
                char k =s.charAt(j);
                if (x.indexOf(k)!=-1)
                {
                    c=0;
                    x="";
                    break;
                }
                else
                {
                    c++;
                    x+=s.charAt(j);
                    if (c>biggestcounter)
                        biggestcounter=c;
                }
            }
        }
        return biggestcounter;
        
    }
}