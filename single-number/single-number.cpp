class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,bool> check;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            int a = nums[i];
            if(check[a]==true)
                 check[a]=false;
            else{
                check[a] = true;
            }
            
        }
        
        for(auto i : check)
        {
            if(i.second==true)
                return i.first;
        }
        return 1;
    }
};