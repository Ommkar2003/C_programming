#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    float m, p, c, b, mark_obt, per;
    printf("enter marks:\n");
    scanf("%f%f%f%f", &m, &p, &c, &b);
    mark_obt = m + p + c + b;
    per = mark_obt * 100 / 400;
    printf("percentage is %.2f \n",per);
    if (per >= 60)
    {
        printf("first class");
    }
    else if (per>=45)
    {
        printf("second class");
    }
    else if(per>=33)
    {
        printf("third class");
    }
    else if(per>=30)
    {
        printf("pass");
    }
    else 
    {
        printf("fail");
    }
    return 0;

    }
    

