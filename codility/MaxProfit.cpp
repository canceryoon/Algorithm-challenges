// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
using namespace std;
int solution(vector<int> &A) {
// write your code in C++14 (g++ 6.2.0)
	if(A.size() <= 1) 
	  return 0;
			        
	int _size = A.size()-1;
	int bigger = (A[_size] > A[_size-1])? A[_size] : A[_size-1];
	int profit = A[_size] - A[_size-1];
									    
	for(int i = (_size - 2); i >= 0; i--)
	{
	  profit = (profit > (bigger - A[i]))? profit : (bigger - A[i]);
	  bigger = (bigger > A[i])? bigger : A[i] ; 
	}
											    
	if(profit < 0) 
	  profit = 0;
													        
	return profit;												    
}
