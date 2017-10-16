int solution(vector<int> &A)
{
  int multiply = 0;
  int cnt = 0;

  for(vector<int>::size_type i = 0; i < A.size(); i++)
  {
    if(A[i] == 0)
      multiply++;
    else
      cnt += multiply;
  }

  return (cnt > 1000000000 || cnt < 0)? -1 : cnt ;
}
