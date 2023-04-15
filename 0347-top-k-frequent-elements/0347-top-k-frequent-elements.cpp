class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        int n=nums.size();
        for (int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        multimap<int, int> sortedMap;
         for (const auto& pair : mp) {
        sortedMap.insert({pair.second, pair.first});
    }
         vector<int>ans;
        //cout<<sortedMap.size()<<endl;
        int length=sortedMap.size();
        int i=1;
        for (auto it: sortedMap)
        {
            if (length-i<k)
                ans.push_back(it.second);
            i++;
            
        }
       
        return ans;
    }
};