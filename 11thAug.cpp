class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int n=citations.size();
        int l=0;
        int r=n-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(citations[mid]<n-mid)
                l=mid+1;
            else
                r=mid-1;
        }
        return n-l;
    }
};
