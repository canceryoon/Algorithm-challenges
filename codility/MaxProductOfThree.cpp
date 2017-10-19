#include <algorithm>

int solution(vector<int> &A)
{
  sort(A.begin(), A.eng());
  int max = (A[A.size()-1]*A[A.size()-2]*A[A.size()-3]);
  if(A[0] < 0 && A[1] < 0)
    max = (max > (A[0]*A[1]*A[A.size()-1]))? max : (A[0]*A[1]*A[A.size()-1]);

  return max;
}
