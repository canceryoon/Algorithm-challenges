// you can use includes, for example:
// #include <algorithm>
#include <stack>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size() == 1) return 1;
    
    stack<int> fish;
    int ret = 0;
    
    for(vector<int>::size_type i = 0; i < A.size(); i++)
    {
        if(B[i] == 0)
        {
            ret++;
            while(!fish.empty())
            {
                ret--;
                if(fish.top() > A[i])
                    break;
                else
                    fish.pop();
            }
        }
        else
        {
            ret++;
            fish.push(A[i]);
        }
    }
    return ret;
}