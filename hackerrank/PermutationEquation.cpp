vector<int> permutationEquation(vector<int> p) {
  vector<int> ans(p.size());
  for(int i = 1; i <= p.size(); i++)
  {
    int idx = find(p.begin(), p.end(), i) - p.begin() + 1;
    ans[i-1] = find(p.begin(), p.end(), idx) - p.begin() + 1;
  }

  return ans;
}
