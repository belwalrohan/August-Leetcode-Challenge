class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<int> ans;
        map<int,int> dicti;
        for(int i=0;i<intervals.size();i++)
            dicti[intervals[i][0]]=i;
        for(auto i:intervals)
        {
            auto itr=dicti.lower_bound(i[1]);
            if(itr==dicti.end())
                ans.push_back(-1);
            else
                ans.push_back(itr->second);
        }
        return ans;
    }
};
