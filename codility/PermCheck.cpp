#include <algorithm>
#include <iostream>

int solution(vector<int> &A)
{
  std::sort(A.begin(), A.begin()+A.size());
  for(std::vector<int>::size_type i = 0; i < A.size(); i++)
  {
    if(i+1 != A[i]) return 0;
  }
  return 1;
}
