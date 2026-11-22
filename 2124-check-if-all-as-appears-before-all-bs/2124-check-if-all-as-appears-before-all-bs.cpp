class Solution {
public:
    bool checkString(string s) {
        for(int i=0;i<s.length();i++){
            if(s[i]==s[i+1] && s[i]=='a') continue;
            else if(s[i]=='a' && s[i+1]=='b'){
                if(s[i+2]=='a') return false;
                else continue;
            }
            else if(s[i]=='b'){
                if(s[i+1]=='a') return false;
                else continue;
            }
        }
        return true;
    }
};