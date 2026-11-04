class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(auto st : strs){
            int len = size(st);
            ans += to_string(len);
            ans += "#";
            ans += st;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        string tmp = "";
        for(int i=0;i<size(s);i++){
            string length = "";
            while(s[i]!='#'){
                length += s[i];
                i++;
            }
            int len = stoi(length);
            i++;
            while(len--){
                tmp+=s[i];
                i++;
            }
            i--;
            ans.push_back(tmp);
            tmp ="";
        }
        return ans;
    }
};
