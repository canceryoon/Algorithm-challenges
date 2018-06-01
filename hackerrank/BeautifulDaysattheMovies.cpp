int beautifulDays(int i, int j, int k) {
  int re;
  int ori;
  int cnt = 0;
  
  for(int x = i; x <= j; x++)
  {
    re = 0;
    ori = x;
    while(ori != 0)
    {
      re = (re*10) + (ori%10);
      ori = ori/10;
    }
    re =abs(x-re);
    if(re%k == 0)
      cnt++;    
  }

  return cnt;
}
