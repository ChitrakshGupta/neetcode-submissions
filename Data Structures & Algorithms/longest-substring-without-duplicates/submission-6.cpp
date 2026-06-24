class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int left=0; 
       int right=0;

       int maxLen=0;
       unordered_map<char,int> mp;

       while(right<s.size()){
        /// right element ko daal do 

        mp[s[right]]++;


// agr right wala element already present ho to 
// sare element hta fo left se jo bhi repeated h 
        while(mp[s[right]]>1){
            mp[s[left]]--;

            left++;
        }

        // max length ko update krte jao
        maxLen=max(maxLen,(right-left+1));
        right++;
        



       }

       return maxLen;
    }
};