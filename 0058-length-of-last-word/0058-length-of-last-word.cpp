class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int i=0;
        int c=0;
        while(s[i]==' ' && i<s.length())
            i++;
        while(s[i]!=' ' && i<s.length())
        {
            c++;
            i++;
        }
        return c;
    }
};