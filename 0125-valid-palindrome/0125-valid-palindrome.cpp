class Solution {
public:
    bool isPalindrome(string s) {
        string updatedS;
        int n = s.size();
        for(int i = 0; i<n; i++){
            if(int(s[i]) >= 65 && int(s[i]) <= 90) updatedS += s[i]+32;
            if ((int(s[i]) >= 97 && int(s[i]) <= 122) || (int(s[i]) >= 48 && int(s[i]) <= 57))  updatedS += s[i];
        
        }
        int k = updatedS.size()-1;
        int j = 0;
       
        while(j <k){
            if(updatedS[j] != updatedS[k]) return false;
            j++; k--;
        }
        return true;
    }
};