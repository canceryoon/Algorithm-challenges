#include <algorithm>
#include <iostream>

int solution(vector<int> &a) {
  std::vector<bool> h(a.size());
  
  for(std::vector<bool>::size_type i = 0; i < a.size(); i++)
  {
    if(a[i] > 0 && a[i] <= a.size())
    {
      h[a[i]-1] = true;	    
    }
  }
  
  for(std::vector<bool>::size_type i = 0; i < h.size(); i++)
  {
    if(!h[i]) return i+1;   
  }
  return a.size()+1;
}
