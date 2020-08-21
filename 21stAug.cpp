class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> evenarr;
        vector<int> oddarr;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]%2==0)
                evenarr.push_back(A[i]);
            else
                oddarr.push_back(A[i]);
        }
        evenarr.insert(evenarr.end(),oddarr.begin(),oddarr.end());
        return evenarr;
    }
};
