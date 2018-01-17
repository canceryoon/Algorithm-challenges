/**
 * DATE   : 2018.01.16
 * AUTHOR : canceryoon
 * Problem name : kakao blind test 2 - Dart score calculate 
**/

#include <iostream>
#include <string.h>
#include <math.h>

#define PPOW(a, b) (int)pow((double)a, (double)b)

int calDartScore(char *dartSc);

using namespace std;
int main(int argc, char **argv)
{
	if( argc != 2 )
	{
		cout << "Usage: ./pro2 \"DART SCORE STRING\" " << endl;
		return -1;
	}
	int ret = calDartScore(argv[1]);
	return 1;
}

/**
	* S POW 1
	* D POW 2
	* T POW 3 
	* * N * 2 / (N-1) * 2
	* # -N
**/
int calDartScore(char *dartSc)
{
	int loop = strlen(dartSc);
	int idx = 0;
	int sc[3] = { 0 };
	while( idx < loop )
	{
			
	}
	return 0;
}
