#include <iostream>
#include <vector>

vector<int> solution(int N, vector<int> &A{
  vector<int> ret(N, 0);
  int max = 0;
  int min = 0;
  int tmp;
        
  for(vector<int>::size_type i = 0; i < A.size(); i++)
  {
    tmp = A[i];
    if(tmp > 0 && tmp <= N) 
    {
      if(ret[tmp-1] < min)
	ret[tmp-1] = min;
      
      ret[tmp-1] += 1;
      tmp = ret[A[i]-1];
      max = (max > tmp)? max: tmp;
    }
    else if(tmp == N+1)
      min=max;
  }
					        
  for(vector<int>::size_type i = 0; i < ret.size(); i++)
    if(ret[i] < min ) ret[i]=min;
          
  return ret;
}
