#include<stdio.h>
int main()
{
    int y;
    printf("enter your age: ");
    scanf("%d",&y);
    if (y>=18)
    printf("you are eligible to vote");
    else
    printf("you are not eligible to vote");
    return 0;
}