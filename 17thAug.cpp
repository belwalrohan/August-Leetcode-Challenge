class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        int i=0,candy=1;
        vector<int> ans(num_people);
        while(candies>0)
        {
            if(i==num_people)
                i=0;
            if(candies<candy)
            {
                ans[i]+=candies;
                candies=0;
            }
            else
            {
                ans[i]+=candy;
                candies-=candy;
            }
            candy++;
            i++;
        }
        return ans;
    }
};
