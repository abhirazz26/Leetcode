class Solution {
public:
    bool isAnagram(string s, string t) {
        int arrc[26];
        for(int i=0;i<26;i++)
        {
            arrc[i] = 0;
        }
        
        if(s.size()!=t.size())
            return false;
        
        for(int i=0;i<s.size();i++)
        {
            int index = s[i];
            index -= 'a';
            arrc[index]++;
        }
        for(int i=0;i<t.size();i++)
        {
            int index = t[i];
            index -= 'a';
            arrc[index]--;
        }
        for(int i=0;i<26;i++)
        {
            if(arrc[i] != 0)
                return false;
        }
        return true;
    }
};