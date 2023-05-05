#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int a;
    printf("enter a no");
    scanf("%d",&a);
    if (a>5 && a<15)
    {
        printf("true");
    }
    else {
        printf("false");
    }
    return 0;
}