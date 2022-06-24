class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == "") return 0;
        int j, flag;
        for(int i=0; i<haystack.length(); i++) {
            j=0;
            if(haystack[i] == needle[j]) {
                flag = 1;
                if(haystack.length() - i - needle.length() < 0) return -1;
                for(j=1; j<needle.length(); j++) {
                    if(haystack[i+j] != needle[j]) {
                        flag = 0;
                        break;
                    }
                }
                if(flag == 1) return i;
            }
        }
        return -1;
    }
};