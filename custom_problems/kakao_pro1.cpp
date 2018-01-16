#include <iostream>
#include <stdio.h>
#include <math.h> //using sqrt

#define PPOW(a , b) (int)pow((double)a, (double)b)

void Treasure_map(int len, int *arr1, int *arr2);

using namespace std;
int main(int argc, char **argv)
{
	int arrLen = 0;
	cout << "Input Treasure map len : " ;
	cin >> arrLen;
	
	int *arr1 = new int[arrLen];
	int *arr2 = new int[arrLen];
	
	cout << "Input Treasure map1 : " << endl;
	for(unsigned int i = 0; i < arrLen; i++)
		cin >> arr1[i];
		
	cout << "Input Treasure map2 : " << endl;
	for(unsigned int i = 0; i < arrLen; i++)
		cin >> arr2[i];
		
	puts("");
	cout << "----- Treasure map pro -----" << endl;
	cout << "Map Size : " << arrLen << endl;
	
	cout << "Treasure map1 " << endl;
	for(unsigned int i = 0; i < arrLen; i++)
		cout << arr1[i] << " " ;
	puts("");
	
	cout << "Treasure map2 " << endl;
	for(unsigned int i = 0; i < arrLen; i++)
		cout << arr2[i] << " " ;
	puts("");
	
	
	Treasure_map(arrLen, arr1, arr2);
	
	delete []arr1;
	delete []arr2;
	
	return 1;
}

/**
 * solve 1
void Treasure_map(int len, int *arr1, int *arr2)
{
  char *mapline = new char[len];
  int w1, w2;
  int tmp;
  int loop = 1;
  unsigned int idx = 0;
  
  int arrlen = 0;
  while( arrlen < len )
  {
    while( len >= loop )
    {
      if(  arr1[idx] <= 0 ) 
	w1 = 0;
      else
      {
	tmp = arr1[idx]%2;
	arr1[idx] = arr1[idx]/2;
	w1 = (tmp == 1)? 1 : 0 ;
      }

      if( arr2[idx] <= 0 ) 
	w2 = 0;
      else
      {
	tmp = arr2[idx]%2;
	arr2[idx] = arr2[idx]/2;
	w2 = (tmp == 1)? 1 : 0 ;
      } 
      if( (w1 + w2) == 0 )
	mapline[len-loop] = 32 ;
      else 
	mapline[len-loop] = 35 ;
      loop++;
    }
    cout << "\"" << mapline << "\"," << ;
    arrlen++;
    idx++;
    loop = 1;

  }

}
**/

// unsing bit operation
void Treasure_map(int len, int *arr1, int *arr2)
{
  int *map = new int[len];
  int _len = len;
  int arrLen = 0;
  int idx = len - 1;;
  char *mapline = new char[len];
 
  while( _len-- >= 0 )
    map[_len] = arr1[_len] | arr2[_len];

  while( arrLen < len )
  {
    while(map[arrLen] > 0 )
    {
      mapline[idx--] = (map[arrLen]%2 == 1)? 35 : 32 ;
      map[arrLen] = map[arrLen]/2;
    }
    cout << mapline << " " << endl;
    arrLen++;
    idx = len - 1;
  }

  delete []map;
  delete []mapline;
}
