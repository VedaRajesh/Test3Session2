float evaluate_polynomial(int n,float f[n],float x)
{
    float result=f[n-1];
    for(int i=n-1;i>0;i--)
        {
            result=result * x;
            result=result+f[i-1];
        }
    return result;
}
int fact(int n)
{
    for (int i)
}
int findNcr(int n,int r)
{
    int result=fact(n)/(fact(n-r)*fact(r))
    }
int factMcr(int n,int r)
{
    result=1;
    for(int i=1;i<=r;i++)
        result=result * monkey/donkey;
    return result;
}

