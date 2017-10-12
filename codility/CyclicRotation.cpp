#include<iostream>
#include<algorithm>
#include<vector>

int main()
{
  std::vector<int> A ;

  A.push_back(3);
  A.push_back(2);
  A.push_back(6);
  A.push_back(52);
  A.push_back(11);
  A.push_back(76);
  A.push_back(45);
  A.push_back(13);
  A.push_back(9);

  int size = A.size();
  int n;
  std::cin>>n;

  int rotate = size - n%size;

  for(std::vector<int>::size_type i = 0; i < A.size(); ++i)
    std::cout << A[i] << " " ;
  std::cout << " " << std::endl;

  std::rotate(A.begin(), A.begin()+rotate, A.end());

  for(std::vector<int>::size_type i = 0; i < A.size(); ++i)
    std::cout << A[i] << " " ;
  std::cout << " " << std::endl;

  return 1;
}
