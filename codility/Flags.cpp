int solution(vector<int> &A) {
// write your code in C++14 (g++ 6.2.0)
	vector<int> peaks{};
	int aSize = A.size();
	int pSize;
													    
	for(int i = 1; i < aSize - 1; i++)
		if(A[i-1] < A[i] && A[i] > A[i+1])
			peaks.push_back(i);
																    
	pSize = peaks.size();        
	if(pSize < 2) 
		return pSize;
																				    
	for(int i = 2; i <= pSize; i++)
	{
		int cnt = 1;
		int currentPeak = peaks[0];
		for(int j = 1; j < pSize; j++)
		{
			if(cnt > i)
				break;
																															            
      if((peaks[j] - currentPeak) >= i)
			{
				currentPeak = peaks[j];
			  cnt++;
			}   
		}
																					    
		if( cnt < i )
			return i-1;
	}
										
	return pSize;
}
