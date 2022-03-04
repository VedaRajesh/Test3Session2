#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef struct _fraction Fraction;
Fraction input_fraction()
{
    Fraction f;
    printf("enter nr and dr\n");
    scanf("%d%d",&f.num,&f.den);
    return f;
}