#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

#include <string.h>

using namespace std;
inline void checkRule(vector<int> &v)
{
	for( int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	puts("");
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
	if( argc != 2 && argc != 3 )
	{
		cout << "Usage: p1 {TESTCASE.txt} {RESULT.txt} " << endl;
		cout << "       p1 {TEST_NUM} " << endl;	
		return -1;
	}

	int num = atoi(argv[1]);
	vector<int> v(num, 0);
	for( int i = 0; i < num; i++)
		v[i] = i+1; 
	checkRule(v);
	cout << "===========================" << endl;
	permutation(v, 0, num, num);	

	return 1;
}
