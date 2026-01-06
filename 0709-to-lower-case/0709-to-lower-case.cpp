class Solution {
public:
    string toLowerCase(string s) {
        string newstr = "";
        for (auto ch : s) {
            newstr += tolower(ch);
        }
        return newstr;
    }
};