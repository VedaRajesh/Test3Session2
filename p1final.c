#include <stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("enter the first numerator and dinominator \n");
    scanf("%d%d",num1,den1);
    printf("enter the second numerator and dinominator \n");
    scanf("%d%d",num2,den2);
}
void add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{
  *num3=(num1*den2)+(num2*den1);
    *den3=den2*den1;
}
void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
    int gcd;
    for(int i=1;i<=num3 && i<=den3;++i)
        {
            if(num3%i==0 && den3%i==0)
                gcd=i;
        }
    printf("\n sum of %d/%d + %d/%d is %d/%d",num1,den1,num2,den2,num3,den3);
}
int main()
{
    int num1,den1,num2,den2,num3,den3;
    input(&num1,&den1,&num2,&den2);
    add(num1,den1,num2,den2,&num3,&den3);
    output(num1,den1,num2,den2,num3,den3);
    return 0;
}
