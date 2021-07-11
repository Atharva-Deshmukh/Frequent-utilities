// A utility function to find median of three integers
float Median_3(int a,int b,int c)
{
    return ((a + b + c)- (max(a, max(b, c))- min(a, min(b, c))));
}
