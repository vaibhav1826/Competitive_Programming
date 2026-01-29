// 844. Backspace String Compare

class Solution {
public:
    string check(string s){
        string str="";
       for(int i=0;i<s.length();i++){
            if(s[i]=='#' && str.length()!=0){
                str.pop_back();
            }
            else if(s[i]=='#' && str.length()==0){
                continue;
            }
            else{
                str.push_back(s[i]);
            }
       }
       return str;
    };

    bool backspaceCompare(string s, string t) {
       if(check(s)==check(t)){
        return true;
       }
       return false; 
    }
};