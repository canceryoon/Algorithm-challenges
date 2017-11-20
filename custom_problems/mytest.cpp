/**
* DATE:   2017.11.12 
* AUTHOR: canceryoon
* There are two threads and Number stack: THD1 and THD2 NUMSTACK.
* THD1 puts up to N in NUMSTACK in ascending order.
* THD2 subtracts from NUMSTACK regardless of THD1.
* Print the number of branches THD2 can print in ascending order.
* Example: Input Number : 3 
* Output : 123
*          132
*          213
*          231
*          321
* Test Program support standard I/O: <p1 test_case.txt result.txt>
* Input number range is 0 < N <= 16.
* If input 0, program is done.
**/

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;
inline void checkRule(vector<int> &v)
{
  short checknum = 0;
	long int ret = v[0];
  checknum |= (0x1 << (v[0]-1));
  for( int i = 1; i < v.size(); i++)
  {
    if( v[i-1] > v[i] )
    {
      for( int j = v[i]+1; j < v[i-1]; j++)
				if( !(checknum & (0x1 << (j-1))) )
					return ;
		}
		checknum |= (0x1 << (v[i]-1));
		ret = (ret*10) + v[i];
	}
	cout << ret << endl;
}

inline void checkRule(vector<int> &v, ostream &retfile)
{
  short checknum = 0;
	long int ret = v[0];
  checknum |= (0x1 << (v[0]-1));
  for( int i = 1; i < v.size(); i++)
  {
    if( v[i-1] > v[i] )
    {
      for( int j = v[i]+1; j < v[i-1]; j++)
				if( !(checknum & (0x1 << (j-1))) )
					return ;
    }
		checknum |= (0x1 << (v[i]-1));
		ret = (ret*10) + v[i] ;
	}
		retfile << ret << endl;
}

inline void permutation(vector<int> &v, int depth, int loop, int end)
{
	if(depth == end)
	{
		checkRule(v);
		return;
	}
	for(unsigned int i = depth; i < loop; i++)
	{
		swap(v[i], v[depth]);
		permutation(v, depth + 1, loop, end);
		swap(v[i], v[depth]);
	}
}

inline void permutation(vector<int> &v, int depth, int loop, int end, ostream &retfile)
{
  if(depth == end)
  {
    checkRule(v, retfile);
    return;
  }
  for(unsigned int i = depth; i < loop; i++)
  {
    swap(v[i], v[depth]);
    permutation(v, depth + 1, loop, end, retfile);
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
      else if( !(0 <= num && num <= 16) )
      {
				cout << "INPUT RANGE: 1 ~ 16" << endl;
				continue;
      }
      
      vector<int> v(num, 0);
      for( int i = 0; i < num; i++)
				v[i] = i+1; 
      permutation(v, 0, num, num);	
    }
  }
	else
	{
		string tcPath(argv[1]);
		string resultPath(argv[2]);
	
		ifstream tcfile(tcPath.c_str());
		ofstream retfile(resultPath.c_str(), ios::out);
		
		if(!tcfile.is_open())
		{
			cout << "Fail open tc file: " << tcPath << endl;
			return -1;
		}

		int num;
		while(tcfile >> num)
		{
			vector<int> v(num,0);
			for( int i = 0; i < num; i++)
				v[i] = i+1;
			permutation(v, 0, num, num, retfile);
			retfile << endl;
		}

		tcfile.close();
		retfile.close();
	}
  return 1;
}
