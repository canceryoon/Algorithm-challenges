int hourglassSum(vector<vector<int>> arr) {
  int max=INT_MIN;
  int tmp;
  for(int i=0; i< 4; i++)
  {
    for(int j=0; j<4; j++)
    {
      tmp = arr[i][j] +arr[i][j+1] +arr[i][j+2] +arr[i+1][j+1] +arr[i+2][j] +arr[i+2][j+1] +arr[i+2][j+2];
      max = (max > tmp)? max : tmp;
    }
  }

  return max;
}
