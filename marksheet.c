#include<stdio.h>
int main()
{
    int m,p,c,b,o,a;
    float r;
    printf("enter math mark:");
    scanf("%d",&m);
    printf("enter physics mark:");
    scanf("%d",&p);
    printf("enter chemistry mark:");
    scanf("%d",&c);
    printf("enter biology mark:");
    scanf("%d",&b);
    o=m+p+c+b;
    a=o/4;
    r=o*100/400;
    printf("mark obtained is %d\n",o);
    printf("average mark is %d\n",a);
    printf("percentage is %f\n",r);
    return 0;
}