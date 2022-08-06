class Solution {
public:
    int longestValidParentheses(string s) {
        int ans=0;
        stack<int> S;
        
        S.push(-1);
        for(int i=0; i<s.size(); i++){
            int t = S.top();
            if(t!=-1 && s[t]=='(' && s[i]==')'){
                S.pop();
                ans = max(ans, i-S.top());
            }
            else{
                S.push(i);
            }
        }
        
        return ans;
    }
};