class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int total=0,rotten=0,time=0,m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1 || grid[i][j]==2)
                    total++;
                if(grid[i][j]==2)
                    q.push(make_pair(i,j));
            }
        }
        if(total==0)
            return 0;
        while(!q.empty())
        {
            int size=q.size();
            rotten+=size;
            if(rotten==total)
                return time;
            time++;
            for(int i=0;i<size;i++)
            {
                pair<int,int> p=q.front();
                if(p.first>0 && grid[p.first-1][p.second]==1)
                {
                    grid[p.first-1][p.second]=2;
                    q.push(make_pair(p.first-1,p.second));
                }
                if(p.first<m-1 && grid[p.first+1][p.second]==1)
                {
                    grid[p.first+1][p.second]=2;
                    q.push(make_pair(p.first+1,p.second));
                }
                if(p.second>0 && grid[p.first][p.second-1]==1)
                {
                    grid[p.first][p.second-1]=2;
                    q.push(make_pair(p.first,p.second-1));
                }
                if(p.second<n-1 && grid[p.first][p.second+1]==1)
                {
                    grid[p.first][p.second+1]=2;
                    q.push(make_pair(p.first,p.second+1));
                }
                q.pop();
            }
        }
        return -1;
    }
};
