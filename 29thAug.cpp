class Solution {
public:
    vector<int> pancakeSort(vector<int>& A) {
        int x,i,j;
        vector<int>ans;
        for(int i=A.size();i>=1;i--)
        {
            for(j=0;j<A.size();j++)
            { if(A[j]==i) break;
            }
            if(j!=i-1)
            {
                reverse(A.begin(),A.begin()+j+1);
                ans.push_back(j+1);
                reverse(A.begin(),A.begin()+i);
                ans.push_back(i);
            }
        }
        return ans;
    }
};
