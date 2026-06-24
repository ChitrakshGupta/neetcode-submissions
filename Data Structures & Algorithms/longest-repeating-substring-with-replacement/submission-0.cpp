class Solution {
public:
    int characterReplacement(string s, int k) {
// simple calculate all substr
// changes =total substr len -max freq of an element
// if changes==k then it should add in the answer

int maxLen=0;
int maxfreq=0;

for(int i=0; i<s.size(); i++){

    map<char,int> mp;
    maxfreq=0;

    for(int j=i; j<s.size(); j++){

        mp[s[j]]++;
        maxfreq=max(maxfreq,mp[s[j]]);
        int changes=(j-i+1)-maxfreq;
        if(changes<=k){
            maxLen=max(maxLen,j-i+1);

        }
        else{
            break;
        }




    }
}
return maxLen;


    }
};
