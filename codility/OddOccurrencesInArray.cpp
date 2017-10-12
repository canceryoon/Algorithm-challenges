#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

int cmp(void* f, void* s)
{
  if(*(int*)f > *(int*)s)
    return 1;  
  else if(*(int*)f > *(int*)s)
    return -1;
  else 0;
}

int main()
{
  int arr[]={1,4,1,4,6,7,123,3,6,7,123};
  int cnt = 1;  
//qsort(arr, sizeof(arr)/sizeof(int), sizeof(int), cmp);
  std::sort(arr, arr+(sizeof(arr)/sizeof(int)));
  for(int i = 0 ;i< (sizeof(arr)/sizeof(int)); i++)
    if(arr[i] == arr[i+1])
      cnt++;
    else
    {
      if(cnt%2 != 0)
	std::cout << arr[i];
      cnt = 1;
    }
}


