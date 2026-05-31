class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mp;
        vector<vector<string>> ans;
        int k=0;
        for(int i =0; i<strs.size(); i++){
            string str=strs[i];

            sort(str.begin(),str.end());
            mp[str].push_back(strs[i]);

        }
        for(auto it:mp){
            ans.push_back(it.second);
        }

        return ans;
        
    }
};
