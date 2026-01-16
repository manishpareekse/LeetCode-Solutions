class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int largest=0;
     for(auto x:candies){
        largest=max(x,largest);
     }
        vector<bool>result;
        for(auto x:candies){
            if(x + extraCandies >= largest){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
    }
};