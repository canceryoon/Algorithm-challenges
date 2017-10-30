// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int sum = A[0];
    int bigger = A[0];
    int size = A.size();
    if(size == 1 ) 
        return bigger;
        
    for(int i = 1; i < size; i++)
    {
        sum =( (sum + A[i]) > A[i])? (sum + A[i]) : A[i];
        bigger = ( bigger > sum )? bigger : sum ;
    }
    
    return bigger;
}