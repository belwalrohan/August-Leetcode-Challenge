class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.size()==0)
            return 0;
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        int comp=intervals[0][1],count=1,ans=0;
        for(int i=1;i<n;i++)
        {
            if(intervals[i][0]<comp)
            {
                comp=min(comp,intervals[i][1]);
                count++;
            }
            else
            {
                ans+=count-1;
                count=1;
                comp=intervals[i][1];
            }
        }
        if(count!=1)
            ans+=count-1;
        return ans;
    }
};
