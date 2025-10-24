import java.util.Vector;
class Solution {
    public int[][] merge(int[][] intervals) {
        if (intervals.length==0)
            return intervals;
         Vector<int[]> vec = new Vector<>();
        int [] x = new int [intervals.length];
        int [] y = new int [intervals.length];
        for (int i=0;i<intervals.length;i++)
        {
            x[i]=intervals[i][0];
            y[i]=intervals[i][1];
        }
        Arrays.sort(x);
        Arrays.sort(y);
        for (int i=0;i<x.length;i++)
        System.out.println(y[i]);
        int [] temp=new int[2];
        temp[0]=x[0];
        for (int i=0;i<x.length;i++)
        {
            if (i+1==x.length)
            {
                temp[1]=y[i];
                vec.add(new int[] { temp[0], temp[1] });
                break;
            }
            if (y[i]>=x[i+1])
            {
                continue;
            }   
            else 
            {
                temp[1]=y[i];
                System.out.println(temp[0]+" "+temp[1]);
               vec.add(new int[] { temp[0], temp[1] });
                temp[0]=x[i+1];
            }
        }
        return vec.toArray(new int[vec.size()][]);
    }
}