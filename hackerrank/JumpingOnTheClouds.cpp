int jumpingOnClouds(vector<int> c, int k) {
  int e = 100;
  for(int i = k; i < c.size(); i += k)
  {
    e -= (c[i] == 1)? 3 : 1;
  }
  e -= (c[0] == 1)? 3 : 1;
  
  return e;
}
