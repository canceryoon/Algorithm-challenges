int hurdleRace(int k, vector<int> height) {
  sort(height.begin(), height.end(), greater<int>());
  return ((height[0]-k) <= 0 )? 0 : height[0]-k;
}
