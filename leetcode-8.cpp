#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        bool ans=false;
        map<int,int>Rankss;
        map<char,int>Suitss;
        // Counting Frequency of Ranks vector
        for(int i=0;i<ranks.size();i++)
            Rankss[ranks[i]]++;
        // Counting Frequency of Suits Vector
        for(int i=0;i<suits.size();i++)
            Suitss[suits[i]]++;
        // it.second checks last appearance of elements . so if it.second =5 means it passes FLUSH Case.
        for(auto it : Suitss ) if(it.second>=5) return "Flush";
        // In Ranks Map if it.second =2 it will return Pair and if it.second>=3 it will return three of a kind.
        for(auto it : Rankss)
        {
            if(it.second>=2) ans=1;
            if(it.second>=3) return "Three of a Kind";
        }
        if(ans) return "Pair";
// in else case return High Card.
        return "High Card";
    }
};