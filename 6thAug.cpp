class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int, int> numbers;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            numbers[i+1]=0;
        }
        for(int i=0;i<nums.size();i++)
        {
            numbers[nums[i]]++;
        }
        for(auto itr=numbers.begin();itr!=numbers.end();++itr)
        {
            if(itr->second==2)
                ans.push_back(itr->first);
        }
        return ans;
    }
};
