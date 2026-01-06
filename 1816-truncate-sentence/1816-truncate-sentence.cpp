class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans="";
        int space=0;
        for(char ch: s){
            if(ch==' ')
                space++;
            if(space==k)
                break;
            else
                ans+=ch;
        }
        return ans;
    }
};
