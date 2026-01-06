class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            digits[i]=0;
        }
        vector<int>ans;
        ans.push_back(1);
        for(auto x:digits){
            ans.push_back(x);
            
        }
        return ans;
    }
};