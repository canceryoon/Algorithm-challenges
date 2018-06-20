int findDigits(int n) {
    int constNum = n;
    int cnt = 0;
    int tmp;
    
    while(constNum > 0)
    {
        tmp = constNum % 10;
        if( tmp != 0 && n % tmp == 0 )
            cnt++;
        constNum = constNum / 10;
    }
    
    return cnt;
}
