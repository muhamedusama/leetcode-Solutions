class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
         vector<int>twoindex;
        int arr[20100]={0};
        for (int i=0;i<numbers.size();i++)
        {
          
            arr[numbers[i]+1000]++;
        }
        for (int i=0;i<numbers.size();i++)
        {
            
            int temp=target-numbers[i];
            cout<<arr[temp+1000]<<endl;
            if(arr[temp+1000]>1 && temp==numbers[i])
                twoindex.push_back(i+1);
            if(arr[temp+1000]>0 && temp!=numbers[i])
                twoindex.push_back(i+1);
        }
        return twoindex;
    }
};