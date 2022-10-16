class Solution {
public:
    string intToRoman(int num) {
        string x="";
        while(num!=0)
        {
            if (num>=1000)
            {
                x.append("M");
                num-=1000;
                continue;
            }
             else if (num>=900)
            {
                x.append("CM");
                num-=900;
                continue;
            }
              else if (num>=500)
            {
                x.append("D");
                num-=500;
                continue;
            }
              else if (num>=400)
            {
                x.append("CD");
                num-=400;
                continue;
            }
              else if (num>=100)
            {
                x.append("C");
                num-=100;
                continue;
            }
              else if (num>=90)
            {
                x.append("XC");
                num-=90;
                continue;
            }
              else if (num>=50)
            {
                x.append("L");
                num-=50;
                continue;
            }
              else if (num>=40)
            {
                x.append("XL");
                num-=40;
                continue;
            }
              else if (num>=10)
            {
                x.append("X");
                num-=10;
                continue;
            }
              else if (num>=9)
            {
                x.append("IX");
                num-=9;
                continue;
            }
              else if (num>=5)
            {
                x.append("V");
                num-=5;
                continue;
            }
              else if (num>=4)
            {
                x.append("IV");
                num-=4;
                continue;
            }
              else 
            {
                x.append("I");
                num-=1;
                continue;
            }
        }
        return x;
    }
};