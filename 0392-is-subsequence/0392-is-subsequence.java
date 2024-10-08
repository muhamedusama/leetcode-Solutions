class Solution {
    public boolean isSubsequence(String s, String t) {
        int counter=0;
        for (int i=0;i<t.length();i++)
        {
          
            System.out.println(counter);
            if (counter>=s.length())
            {
                return true;
            }
            if (s.charAt(counter)==t.charAt(i))
            {
                counter++;
            }
           
          
        }
           if (counter>=s.length())
            {
                return true;
            }
        return false;
    }
}