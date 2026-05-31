class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        priority_queue<pair<int,int>> pq;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto it: mp){
            pair <int,int> pr(it.second,it.first);
            pq.push(pr);
            
        }
        for (int i=0; i<k; i++){
           pair<int,int> qw=pq.top();
           pq.pop();

           ans.push_back(qw.second);
        }
        return ans;
        
    }
};
