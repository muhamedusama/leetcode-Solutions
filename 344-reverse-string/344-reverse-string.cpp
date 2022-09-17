class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size()/2;
        for (int i=0;i<n;i++)
        {
            char temp=s[s.size()-1-i];
            cout<<temp;
            s[s.size()-1-i]=s[i];
            s[i]=temp;
        }
    }
};