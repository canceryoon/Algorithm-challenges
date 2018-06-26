void extraLongFactorials(int n) {
    int ans[512],digit;
    ans[0] = 1;
    digit = 1;
    for(int i = 2; i <= n; i++){

        int cary = 0;
        for(int j = 0; j < digit; j++){
            int pod = ans[j]*i+cary;
            ans[j] = pod%10;
            cary = pod/10;
        }
        while(cary){
            ans[digit] = cary%10;
            cary/=10;
            digit++;
        }
    }
    for(int i = digit-1; i>= 0; i--)cout << ans[i];
    cout << endl;

}
