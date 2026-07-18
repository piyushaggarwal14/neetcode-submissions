class Solution {
public:
    bool isAlphanumeric(char c){
        if( c>='A'&& c<='Z' || c>='a' && c<='z' || c>='0' && c<='9'){
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {
        int l = s.length();
        int i=0,j=l-1;

        while(i<j){
            while(i<j && !isAlphanumeric(s[i])){
                i++;
            }
            while(j>i&& !isAlphanumeric(s[j])){
                j--;
            }
            if(tolower(s[i])!=tolower(s[j])){
                return false;
            }
            i++;
            j--;
        }
        return true;

    }
};
