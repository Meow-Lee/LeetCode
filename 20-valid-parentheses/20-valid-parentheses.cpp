class Solution {
public:
    bool isValid(string s) {
        stack<char> S;
        
        for(auto c : s){
            if(c=='(' || c=='{' || c=='['){
                S.push(c);
            }
            else{
                if(S.empty() || (S.top()=='(' && c!=')') || (S.top()=='{' && c!='}') || (S.top()=='[' && c!=']')){
                    return false;
                }
                S.pop();
            }
        }
        return S.empty();        
    }
};