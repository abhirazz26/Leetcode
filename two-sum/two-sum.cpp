class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> index;
        int i=0;
        int n = nums.size();
        while(i<n-1){
            int a = nums[i];
            for(int j=i+1;j<n;j++)
            {
                int b = nums[j];
                if((a+b)==target){
                    index.push_back(i);
                    index.push_back(j);
                    break;
                }
                    
            }
            i++;
        }
        return index;
    }
};