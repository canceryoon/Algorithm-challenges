#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

#include <string.h>

using namespace std;
inline void checkRule(vector<int> &v)
{
  short checknum = 0;
  for( int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  
  checknum |= (0x1 << (v[0]-1));
  for( int i = 1; i < v.size(); i++)
  {
    if( v[i-1] > v[i] )
    {
      for( int j = v[i]+1; j < v[i-1]; j++)
	if( !(checknum & ( 0x1 << (j-1) )))
	{
	  cout << "error this " << v[i-1] << " " << v[i] << endl;
	  return ;
	}
    }

    checknum |= (0x1 << (v[i]-1));
  }
  cout << " " << checknum <<  endl;
}

inline void permutation(vector<int> &v, int depth, int n, int k)
{
  if(depth == k)
  {
    checkRule(v);
    return;
  }
  for(unsigned int i = depth; i < n; i++)
  {
    swap(v[i], v[depth]);
    permutation(v, depth + 1, n, k);
    swap(v[i], v[depth]);
  }
}

int main(int argc, char **argv)
{
  if( argc != 1 && argc != 3 )
  {
    cout << "Usage: p1 {TESTCASE.txt} {RESULT.txt} " << endl;
    cout << "       p1 " << endl;	
    return -1;
  }

  if( argc == 1 )
  {
    while(1)
    {
      int num;
      cin >> num;
      
      if(num == 0)
	break;
      else if( num < 0 || num > 16 )
      {
	cout << "INPUT RANGE: 1 ~ 16" << endl;
	continue;
      }
      
      vector<int> v(num, 0);
      for( int i = 0; i < num; i++)
	v[i] = i+1; 
      checkRule(v);
      cout << "===========================" << endl;
      permutation(v, 0, num, num);	
    }
  }
  return 1;
}
