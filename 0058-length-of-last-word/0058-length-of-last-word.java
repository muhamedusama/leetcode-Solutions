class Solution {
    public int lengthOfLastWord(String s) {
        int lastword=0,currword=0;
        for (int i=0;i<s.length();i++)
        {
            if (s.charAt(i)>='a' && s.charAt(i)<='z' )
            {
                currword++;
            }
            else if (s.charAt(i)>='A' && s.charAt(i)<='Z' )
            {
                currword++;
            }
            else if (currword!=0)
            {
                lastword=currword;
                currword=0;
            }
            else 
                continue;
            
        }
        if (currword==0)
            return lastword;
        return currword;
                
    }
}