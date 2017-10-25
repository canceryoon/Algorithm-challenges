// you can use includes, for example:
// #include <algorithm>
#include <stack>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &H) {
    // write your code in C++14 (g++ 6.2.0)
    
    if(H.size() <=1 ) return H.size();
    
    stack<int> st;
    int ret = 0;
    
    for(vector<int>::size_type i = 0; i < H.size(); i++)
    {
        while(!st.empty() && st.top() > H[i])
            st.pop();
            
        if(!st.empty() && st.top() == H[i]) 
            continue;
            
        if(st.empty() || st.top() < H[i])
        {
            st.push(H[i]);
            ret++;
        }
    }
    return ret;
}