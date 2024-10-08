class Solution {
    public boolean isSubsequence(String s, String t) {
        int counter=0;
         if (counter>=s.length())
            {
                return true;
            }
        for (int i=0;i<t.length();i++)
        {
           
            if (s.charAt(counter)==t.charAt(i))
            {
                counter++;
            }
                if (counter>=s.length())
            {
                return true;
            }        
          
        }
       
        return false;
    }
}