// you can use includes, for example:
// #include <algorithm>
#include <map>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
using namespace std;
int solution(vector<int> &A) {
// write your code in C++14 (g++ 6.2.0)
	int _size = A.size();

	if(_size <= 1 ) return 0;
					    
	map<int, int> counter;
	int cnt = 0;
	int v = 0;
	double boundary = _size / 2;
										    
	for(int i = 0; i < _size; i++)
	{
	  counter[A[i]] = counter[A[i]] + 1;
	  if(counter[A[i]] > cnt)
	  {
			cnt = counter[A[i]];
		  v = A[i];
    }
  }
															    
  if( cnt <= boundary ) 
    return 0;
																	     
	int equiCnt = 0;
	int vCnt = 0;
	for(int i = 0; i < _size; i++)
	{
	  if(A[i] == v) 
			vCnt++;      
																															        
	  if( ((double)((i+1)/2) < vCnt) && ((double)((_size-(i+1))/2) < cnt-vCnt ))
			equiCnt++;
	}
																							    
	return equiCnt;
}

