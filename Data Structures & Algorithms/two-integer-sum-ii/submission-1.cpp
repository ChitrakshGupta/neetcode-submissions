class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size()-1;
        vector<int>  ans;
        while(j>i){
            int mid=i+(j-i)/2;
            int curr =numbers[i]+numbers[j];

            if(curr==target){
                ans.push_back(i+1);
                    ans.push_back(j+1);
                    return ans;

            }
            else if(curr>target){
                j--;

            }
            else{
                i++;
            }
            



        }
        return ans;
        
    }
};
