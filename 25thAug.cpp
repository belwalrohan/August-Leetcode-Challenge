class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int dp[days.size()];
        dp[days.size()-1] = *min_element(costs.begin(),costs.end());
        for(int i=days.size()-2; i>=0; i--)
        {
            int j=i+1;
            dp[i] = costs[0] + dp[j];
            while(j<days.size() && days[j]-days[i]<=6)
            {
                j++;
            }
            if(j!=days.size())
            {
                dp[i] = min(dp[i],costs[1]+dp[j]);
                while(j<days.size() && days[j]-days[i]<=29)
                {
                    j++;
                }
                if(j!=days.size())
                {
                    dp[i] = min(dp[i],costs[2]+dp[j]);
                }
                else
                {
                    dp[i] = min(dp[i],costs[2]);
                }
            }
            else
            {
                dp[i] = min(dp[i],costs[1]);
            }
        }
        return dp[0];
    }
};
