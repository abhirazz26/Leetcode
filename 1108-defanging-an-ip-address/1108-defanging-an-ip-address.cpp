class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        int i =0;
        while(address[i] != '\0'){
            if(address[i] =='.'){
                ans+="[.]";
            }
            else{
                ans+=address[i];
            }
            i++;
        }
        return ans;
    }
};