string appendAndDelete(string s, string t, int k) {
  //delete
  int i = 0;
  for ( ; i < std::min(s.length(),t.length()); ++i) {
    if (s[i] != t[i]) {
        break;
    }
  }

  int min_ops = (t.length()-i) + (s.length()-i);

  //Why do this while loop??
  int more_ops = min_ops;
  while(more_ops < k) {
    if (i-- > 0)
        more_ops += 2;
    else
        more_ops++;
  }
  
  return (more_ops > k)? "No" : "Yes";
}
