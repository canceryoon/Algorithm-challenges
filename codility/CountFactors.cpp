#include <math.h>
// The cost of Multiplication is greater than if-else
int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    int cnt = 0;
    int i;
    int n = int(sqrt(N));
    for(i = 1; i <= n; i++ )
    {
        if(N%i == 0)
        {
            if(i*i == N)
                cnt += 1;
            else
                cnt += 2;
        }
    }
    
    return cnt;
}