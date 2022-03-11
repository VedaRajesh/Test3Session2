#include <stdio.h>
 int input_degree()
{
    int n;
    printf("input degree?");
    scanf("%d",&n);
    return n+1;
}
float input_x()
{
    float x;
    printf("enter x");
    scanf("%f",&x);
    return x;
}
void input_coeffecients(int n,float a[n])
{
    printf("input %d coeffecients \n",n);

    for(int i=0;i<n;i++)
        scanf("%f",&a[i]);
}
float evaluate_polynomial(int n, float a[n], float x)
{
    float rs = a[0];
    for(int i=1;i<n;i+=1)
        rs=rs*x + a[i];

    return rs;
}
void output(int n,int a[n],int largest)
{
    printf("\nMAX between");
    for(int i=0;i<n-1;i+=1)
        printf("%d x^%d +",a[i],n-i-1);
    printf("%f at x=%f\n",a[n-1],x);

    printf("=%d\n",result);
}
int main()
{
    int n=input_degree();
    float x=input_x();

    float ar[n];
    input_coeffecients(n,ar);

    output(n,ar,x,evaluate_polynomial(n,ar,x));
}