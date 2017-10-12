#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
  std::vector<int> a;
  a.push_back(5);
  a.push_back(2);
  a.push_back(3);
  a.push_back(1);

  std::sort(a.begin(), a.begin()+a.size());
  
  for(std::vector<int>::size_type i = 0; i < a.size(); i++)
    if(a[i] != i+1)
    {
      std::cout << i+1 ;
      return 1;
    }

  std::cout <<  a.size()+1;
  return 0;
}
