class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int arr[200100]={0};
        for (int i=0;i<numbers.size();i++)
        {
            arr[numbers[i]+1000]++;
        }
        
        vector<int>val;
        for (int i=0;i<numbers.size();i++)
        {
            int temp=target-numbers[i];
            if (arr[temp+1000]>1 && temp==numbers[i])
            {
                val.push_back(i+1);
            }
              if (arr[temp+1000]>0 && temp!=numbers[i])
            {
                val.push_back(i+1);
            }
        }
        
        return val;
    }
};