int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    double tmp;
    double avg = (A[0] + A[1])/2;
    int ret = 0; 
    for(int i = 2; i < A.size(); i++)
    {
        tmp = (double)(A[i-2] + A[i-1] + A[i])/3;
        if( tmp < avg )
        {
            avg = tmp;
            ret = i-2;
        }
        
        tmp = (double)(A[i-1] + A[i])/2;
        if( tmp < avg )
        {
            avg = tmp;
            ret = i-1;
        }
    }
    
    return ret;
}
