int viralAdvertising(int n) {
  int sum = 0;
  int m = 5;
  for(int i = 0; i < n; i++)
  {
    sum += (m/2);
    m =(m/2)*3;
  }
  return sum;
}
