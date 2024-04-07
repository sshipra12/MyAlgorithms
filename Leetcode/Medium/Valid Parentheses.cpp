class Solution {
public:
    bool isValid(string s) {
        // Problem is of EASY type but for learning purposes added in MEDIUM
        int i;
        stack<char> stk;
        bool ans=true;
        for(i=0;i<=s.size()-1;i++){
            // if we find any type of opening bracket just push it in stack
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                stk.push(s[i]);
            }

            // 1. for any type of closing bracket we find, we first check if we have some opening brackts( i.e is stk.size()>0)
            // 2. then the last opening bracket type pushed in stack must match the current closing bracket type
            // TDOD : further explanation of condition
            else if(s[i]==')'){
                if(stk.size()>0&&stk.top()=='(')
                    stk.pop();
                else{
                    ans=false;
                    break;
                }
            }
            else if(s[i]==']'){
                if(stk.size()>0&&stk.top()=='[')
                    stk.pop();
                else{
                    ans=false;
                    break;
                }
            }
            else if(s[i]=='}'){
                if(stk.size()>0&&stk.top()=='{')
                    stk.pop();
                else{
                    ans=false;
                    break;
                }
            }
        }
        if(stk.size()>0)
            ans=false;
        return ans;
    }
};
