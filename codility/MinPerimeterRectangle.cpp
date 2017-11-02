int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    int min = 2+(N << 1);
    int per ;
    
    for(int i = 2; i*i <= N; i++ )
    {
        if(N%i == 0)
        {
            per = ((i + (N/i)) << 1);        
            min = ( min > per )? per : min;   
        }
    }
    
    return min;
}