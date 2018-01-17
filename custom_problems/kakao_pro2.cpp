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
	cout << ret << endl;
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
	int scIdx = -1;
	int idx = 0;
	int sc[3] = { 0 };
	bool beforeNum = false;
	int ret = 0;

	while( idx < loop )
	{
		if( '0' <= dartSc[idx] && dartSc[idx] <= '9' )
		{
			if(beforeNum)
			{
				sc[scIdx] = sc[scIdx]*10 + (dartSc[idx]-48) ;
			}
			else
			{
				scIdx += 1;
				sc[scIdx] =  (dartSc[idx]-48);
			}
			beforeNum = true;
		}
		else
		{
			beforeNum = false;
			switch(dartSc[idx])
			{
				case 'S': sc[scIdx] = PPOW(sc[scIdx], 1); break;
				case 'D': sc[scIdx] = PPOW(sc[scIdx], 2); break;
				case 'T': sc[scIdx] = PPOW(sc[scIdx], 3); break;
				case '*': 
					  if(scIdx > 0)
						  sc[scIdx-1] *= 2;
					  sc[scIdx] *= 2;
					  break;
				case '#': sc[scIdx] *= -1; break;
				default: cout << "Input ERROR" << endl; break;
			}
		}

		idx += 1;	
	}
	for(int i = 0 ; i < 3; i++)
		ret += sc[i];
	return ret;
}
