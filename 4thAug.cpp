class Solution {
public:
    bool isPowerOfFour(int num) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        return (num>0 && floor(log(num)/log(4))==ceil(log(num)/log(4)));
    }
};
