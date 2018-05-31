int utopianTree(int n) {
  int h = 1;
  for(int i = 1 ; i <= n; i++)
    if(i%2==1)
      h *= 2;
    else
      h += 1;
    
  return h;
}
