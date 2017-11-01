// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int _size = A.size();
    vector<int> sum1(_size,0);
    vector<int> sum2(_size,0);
    int max = 0;
    
    for(int i = 1; i < _size-1; i++)
        sum1[i] = (sum1[i-1]+A[i] > 0)? sum1[i-1]+A[i] : 0;   
        
    for(int i = _size-2; i > 0; i--)
        sum2[i] = (sum2[i+1]+A[i] > 0)? sum2[i+1]+A[i] : 0;
        
    for(int i = 1; i < _size-1; i++)
        max =(max > sum1[i-1]+sum2[i+1])? max : sum1[i-1]+sum2[i+1];
        
    return max;
}