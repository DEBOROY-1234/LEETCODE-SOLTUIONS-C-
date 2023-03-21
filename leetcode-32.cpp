#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int max=0,cs=0;
        for(int i=0;i<s.size();i++)
        {
            cs=0;
            string str=s[i];
            for(int j=0;j<str.length();j++)
            {
                if(str[j]==' ')
                cs++;
            }
            cs++;
            if(cs>max)
            max=cs;
        }
        return max;
    }
};