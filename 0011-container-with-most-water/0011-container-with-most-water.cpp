class Solution {
public:
    int maxArea(vector<int>& height) {
        int max=0,temp;
       int L=0;
        int R=height.size()-1;
        while(L<R)
        {
            if (height[L]<height[R])
            {
                temp=height[L]*(R-L);
                L++;
               // cout<<temp<<endl;
            }
            else if (height[R]<=height[L])
            {
                temp=height[R]*(R-L);
                R--;
                //cout<<temp<<endl;
            }
            if (temp>max)
                max=temp;
        }
        return max;
    }
    
};