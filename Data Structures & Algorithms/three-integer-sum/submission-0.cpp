class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        vector<vector<int>>  ans;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                for(int k=j+1; k<nums.size(); k++){
                    if(nums[i]+nums[j]+nums[k]==0 && (i!=j && j!=k && k!=i)){
                    vector<int> ans1;
                    ans1.push_back(nums[i]);
                    ans1.push_back(nums[j]);
                    ans1.push_back(nums[k]);
                    // ans.push_back(ans1);
                    sort(ans1.begin(),ans1.end());
                    if(st.find(ans1)==st.end()){
                        st.insert(ans1);
                            ans.push_back(ans1);
                    }


                    }
                }
            }
        }

        // for(auto i : st){
        //     ans.push_back(i);
        // }
        return ans;
        
    }
};
