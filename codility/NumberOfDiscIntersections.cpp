// you can use includes, for example:
#include <algorithm>
using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int n = A.size();
    int cnt = 0;
    
    vector<pair<long, long> > v;    
    for(int i = 0; i < n; i++)
        v.push_back(pair<long, long>((long)i-A[i],(long)i+A[i]));   

    sort(v.begin(), v.end());        
    
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i +1; j < n; j++)
        {
            if( v[i].second >= v[j].first )
                cnt++;
            else
                break;           
        }
    }
    
    if( cnt > 10000000 ) return -1;   
    return cnt;
}