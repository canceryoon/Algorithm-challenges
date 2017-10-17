#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int cnt = 0;
    sort(A.begin(), A.begin()+A.size());
    
    if(A.size() == 0) return 0;
    if(A[0] == 0) cnt++;
    
    for(vector<int>::size_type i = 0; i < A.size(); i++)
        if(A[i-1] != A[i] ) cnt++;
        
    return cnt;
}
