class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
    
        for(int i = 0 ; i < s.length() ; i++){
            char ch = s.at(i);

            if(ch == '(' || ch == '{' || ch == '[')
                st.push(ch);

            else{
                if(!st.empty()){
                    char c = st.top();
                    if((c == '(' && ch == ')') || (c == '{' && ch == '}') || (c == '[' && ch == ']'))
                        st.pop();
                    else
                        return false;
                }
                else
                    return false;
            }
        }
        if(st.empty())
            return true;
        else
            return false;
    }
};