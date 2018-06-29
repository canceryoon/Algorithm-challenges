int squares(int a, int b) {
    int s,e;
    for(int i=1; i<=a; i++)
        if(i*i >= a)
        {
            s=i;
            break;
        }
    
    for(int i=s; i<=b; i++)
        if(i*i > b)
        {   
            e=i-1;
            break;
        }
    
    return e-s+1;
}
