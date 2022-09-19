class Solution {
public:
    string reverseWords(string s) {
       string word="",sentence="";
       for (int i=0;i<s.length();i++)
       {
          
           if (s[i]==' ')
           {
              reverse(word.begin(),word.end());
               sentence+=word;
               sentence+=" ";
               word="";
           }
           else if (i+1==s.length())
           {
               word+=s[i];
                reverse(word.begin(),word.end());
               sentence+=word;
           }
           else
            word+=s[i];
           
       }
        return sentence;
        }
};