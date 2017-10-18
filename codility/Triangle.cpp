#include <algorithm>
int solution(vector<int> &A) {
  if(A.size() < 3) return 0;       
    sort(A.begin(), A.end());
	      
    for(vector<int>::size_type i = 2; i < A.size(); i++)
      if((double)A[i-2] + (double)A[i-1] > A[i]) return 1;
	          
  return 0;
}
