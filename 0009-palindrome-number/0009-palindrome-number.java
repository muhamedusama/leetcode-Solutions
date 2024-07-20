class Solution {
    public boolean isPalindrome(int x) {
        if (x<0)
            return false;
    String number = new String();
        number=Integer.toString(x);
        Integer length=number.length();
        for (int i=0;i<length/2;i++)
        {
            if (number.charAt(i)!=number.charAt(length-1-i))
                return false;
        }
        return true;
    }
}