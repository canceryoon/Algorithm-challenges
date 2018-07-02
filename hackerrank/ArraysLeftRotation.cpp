vector<int> rotLeft(vector<int> a, int d) {
  int n=d%a.size();
  rotate(a.begin(), a.begin()+n, a.end());
  
  return a;
}
