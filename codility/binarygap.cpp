#include<stdio.h>
#include<iostream>

int main()
{
  int a ;
  std::cin>>a;
  int tmp;
  int mcnt;
  int cnt;
  bool one = false;
  while(a>0)
  {
    tmp = a%2;
    a=a/2;
    std::cout << tmp << " " ;
    if(tmp==0 && one) cnt++;
    else if(tmp==1)
    {
      one=true;
      mcnt=(mcnt>cnt)? mcnt:cnt;
      cnt=0;
    }
  }
  printf("\n");
  std::cout << mcnt << std::endl;
}
