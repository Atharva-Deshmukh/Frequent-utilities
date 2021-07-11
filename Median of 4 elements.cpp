//median of 4 elements
float Median_4(int a,int b,int c,int d)
{
    int Max=max(a,max(b,max(c,d)));
    int Min=min(a,min(b,min(c,d)));
    return (a+b+c+d-Max-Min)/2.0;
}
