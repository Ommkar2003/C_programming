#include<stdio.h>
int main()
{
    int p,c,m,b,o,a;
    float per;
    printf("enter marks");
    scanf("%d%d%d%d",&p,&c,&m,&b);
    o=p+c+m+b;
    a=o/4;
    per=o*100/400;
    printf("per is %f\n",per);
    return 0;
}