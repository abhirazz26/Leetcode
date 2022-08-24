class Solution {
public:
   int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x= 1;
        for(int i =0;i < nums.size(); i++) {
            if(nums[i] <1 || nums[i] == x-1) {
                continue;
            }
            else if(nums[i] ==x) {
                x++;
            }
            else {
                break;
            }
        }
        return x;
    }
};