class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>ans;
        vector<int>v;
        vector<int>v2;
        for(auto x:nums){
            if(x%2==0){
                v.push_back(x);
            }
            else{
                v2.push_back(x);
            }
        }
        for(auto x:v){
            ans.push_back(x);
        }
        for(auto x:v2){
            ans.push_back(x);
        }
        return ans;
    }
};