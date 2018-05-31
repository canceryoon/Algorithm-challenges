vector<int> climbingLeaderboard(vector<int> scores, vector<int> alice) {
  vector<int> ans(alice.size(),0);
  scores.erase(unique(scores.begin(), scores.end()), scores.end());
  
  long long awards; 
  int i = 0;
//  for(vector<int>::size_type i = 0; i < alice.size(); i++)
//  {
    awards = scores.size() + 1;
  
    for(int j = scores.size()-1; j >= 0; j--)
    {
      if(alice[i] < scores[j])
      {
        ans[i] = awards;
        i += 1;
        //if alice score [1] and [2] is same, retry check scores[j] with alice[1] and alice[2]
        j++;
        continue;
//        break;
      }
      awards -= 1;
    }
  
    if( i < alice.size() )
    {
      for(i; i < alice.size(); i++)
        ans[i] = 1;
    }
//  }
  
  return ans;
}

