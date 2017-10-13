#include <algorithm>
#include <iostream>

int solution(int X, vector<int> &A) {
  int arr1[X] = {0,};
  int sum=0;
  for(int i =0 ;i<X; i++)   
  {
    arr1[i]=i+1;
    sum += arr1[i];
  }
	          
  for(std::vector<int>::size_type i=0; i<A.size(); i++)
  {
    if(A[i] <= X && arr1[A[i]-1] != 0)
    {
      sum -= arr1[A[i]-1];
      arr1[A[i]-1]=0;
    }
    if(sum == 0) return i;
  }
 
  return -1;          
}
