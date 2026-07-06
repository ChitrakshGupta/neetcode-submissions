class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue <int> pq;
        for(int i=0; i<stones.size(); i++){
            pq.push(stones[i]);
        }

        while(pq.size()>1){

            int x=pq.top();
            pq.pop();
            // cout<<x;
            int y=pq.top();
            pq.pop();
            
            if(pq.size()==0){
                return abs(x-y);

            }

            if(x!=y){
                pq.push(abs(x-y));

            }
            
        }
        return pq.top();
        
    }
};
