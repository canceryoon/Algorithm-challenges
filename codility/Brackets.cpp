// you can use includes, for example:
// #include <algorithm>
#include <stack>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    stack<char> st;
    
    for(int i = 0; i < S.length(); i++)
    {
        if(S[i] == '(' || S[i] == '[' || S[i] == '{')
            st.push(S[i]);
        else
            switch(S[i])
            {
                case ')' : 
                    if(st.top() == '(')
                    {
                        st.pop();
                        break;
                    }
                    else 
                        return 0;
                case ']' :
                    if(st.top() == '[')
                    {
                        st.pop();
                        break;
                    }
                    else 
                        return 0;
                case '}' :
                    if(st.top() == '{')
                    {
                        st.pop();
                        break;
                    }
                    else 
                        return 0;
            }
    }
    
    if(st.empty()) return 1;
    return 0;
}