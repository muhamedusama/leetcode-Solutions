class Solution {
public:
    bool isPalindrome(int x) {
           string y = to_string(x);
        for (int i=0;i<y.length();i++)
        {
            if (y[i]==y[y.length()-1-i])
                continue;
            else 
                return false;
        }
        
          return true;
        
    }
};