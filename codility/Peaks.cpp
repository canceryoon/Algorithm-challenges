int solution(vector<int> &A) {
	// write your code in C++14 (g++ 6.2.0)
	vector<int> peaks{};
	int aSize = A.size();
	int pSize ;
	int cnt = 0 ;
									    
	for(int i = 1; i < aSize - 1; i++)
		if(A[i-1] < A[i] && A[i] > A[i+1])
			peaks.push_back(i);
											    
	pSize = peaks.size();        
	if(pSize == 0) 
		return pSize;
														    
	for(int i = 1; i <= pSize; i++)
	{
		if((aSize % i) == 0 )
		{
			int blocks = (aSize/i);
			int nCount = 0;
			int peaksNum = 0;
		  for(auto &var: peaks)
				if( (nCount * blocks) <= var && var < ((nCount + 1) * blocks) )
					nCount++;
			
			if(nCount == i)
				cnt = i;
		}
	}
		
  return cnt;
}
