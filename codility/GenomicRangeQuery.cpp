vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    vector<int> ret(P.size());
    vector<int> A(S.size(),0);
    vector<int> C(S.size(),0);
    vector<int> G(S.size(),0);
    vector<int> T(S.size(),0);
    for(vector<int>::size_type i = 0; i < S.size(); i++)
    {
        switch(S[i])
        {
            case 'A' : 
                A[i] = A[i-1] + 1;  
                C[i] = C[i-1];
                G[i] = G[i-1];
                T[i] = T[i-1];
                break;
            case 'C' : 
                A[i] = A[i-1];  
                C[i] = C[i-1] + 1;
                G[i] = G[i-1];
                T[i] = T[i-1];
                break;
            case 'G' :
                A[i] = A[i-1];  
                C[i] = C[i-1];
                G[i] = G[i-1] + 1;
                T[i] = T[i-1];
                break;
            case 'T' : 
                A[i] = A[i-1];  
                C[i] = C[i-1];
                G[i] = G[i-1];
                T[i] = T[i-1] + 1;
                break;
        }
    }
    
    for(vector<int>::size_type i = 0; i < P.size(); i++)
    {
        if(P[i] > 0)
        {
            if(A[Q[i]] - A[P[i]-1] > 0)
                ret[i] = 1;
            else if(C[Q[i]] - C[P[i]-1] > 0)
                ret[i]=2;
            else if(G[Q[i]] - G[P[i]-1] > 0)
                ret[i]=3;
            else
                ret[i]=4;
        }
        else
        {
           if(A[Q[i]] > 0)
                ret[i] = 1;
            else if(C[Q[i]] > 0)
                ret[i]=2;
            else if(G[Q[i]] > 0)
                ret[i]=3;
            else
                ret[i]=4;        
        }
    }
    return ret;   
}