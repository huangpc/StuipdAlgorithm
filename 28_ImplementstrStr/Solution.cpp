/**
Implement strStr().

Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Subscribe to see which companies asked this question.
**/
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int len1 = haystack.length(), len2 = needle.length();
        if(len1 < len2) return -1;
        for(int i = 0; i <= len1 - len2; i++){
            int j = 0;
            for(; j < len2; j++){
                if(haystack[i+j] != needle[j]){
                    break;
                }
            }
            if(j == len2){
                return i;
            }
        }
        return -1;
    }
};

int main(){
    Solution solution;
    cout << solution.strStr("", "") << endl;
    return 0;
}
