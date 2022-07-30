class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }

        vector<int> pailndrome;
        int div = 10;
        while(x/div!=0){
            pailndrome.push_back(x%div);
            x /= div;
        }
        pailndrome.push_back(x);
        
        int f=0, r=pailndrome.size()-1;
        while(f<=pailndrome.size()-1 || r>=0){
            if(pailndrome[f] != pailndrome[r]){
                return false;
            }
            f++;
            r--;
        }

        return true;
    }
};