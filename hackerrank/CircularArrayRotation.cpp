vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
  vector<int> ans(queries.size());
  //int move = a.size() - k;
  //rotate(a.begin(), a.begin()+move, a.end());
  k %= a.size();
  for(int i = 0; i < queries.size(); i++)
  {
      ans[i] = a[(a.size()-k+queries[i])%a.size()];
  }

  return ans;
}
