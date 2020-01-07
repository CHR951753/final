#include <stdio.h>
int main(void)
{
    double a;
    double b;
    double c;
    scanf("%f",&a);
    scanf("%f",&b);
    c=nb(a,b);
        printf("%.2f\n",c);
    }
    void nb(m,n)
    {
        double d=(m+n)*(m+n);
        return d;
    }
