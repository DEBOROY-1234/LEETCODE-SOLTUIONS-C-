
/*You are given a string title consisting of one or more words separated by a single space, where each word consists of English letters. Capitalize the string by changing the capitalization of each word such that:

If the length of the word is 1 or 2 letters, change all letters to lowercase.
Otherwise, change the first letter to uppercase and the remaining letters to lowercase.
Return the capitalized title.*/


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
       string capitalizeTitle(string t){
        int end=0,n=t.size();
        
        while(end<n){
            //put 'start' at start of current word
            int start=end;   
            
            //keep on converting the letter of current word into lowercase {32 is ASCII of                 space}
            while(end<n and t[end]!=32) t[end]=tolower(t[end]),  end++;
            
            ///Now make First Capital case -> if length>2
            if(end-start>2) t[start]=toupper(t[start]);
            
            end++; //to go next word
        }
        return t;
    }
};